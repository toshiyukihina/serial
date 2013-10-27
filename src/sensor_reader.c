#include <servicesync/moat.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <unistd.h>

#include "app_debug.h"
#include "sensor_reader.h"

static sse_int
TSensorReader_SetBlocking(TSensorReader* self, sse_bool enable) {
  struct termios tty;
  sse_int ecode = SSE_E_OK;
  APP_LOG_DEBUG("TSensorReader_SetBlocking enter");
  sse_memset(&tty, 0, sizeof tty);
  if (tcgetattr(self->fDesc, &tty) != 0) {
    APP_LOG_ERROR("error %d from tggetattr", errno);
    ecode = SSE_E_GENERIC;
  }
  tty.c_cc[VMIN]  = enable ? 1 : 0;
  tty.c_cc[VTIME] = SENSOR_READER_DEFAULT_READ_TIMEOUT;
  if (tcsetattr(self->fDesc, TCSANOW, &tty) != 0) {
    APP_LOG_ERROR("error %d setting term attributes\n", errno);
    ecode = SSE_E_GENERIC;
  }
  APP_LOG_DEBUG("TSensorReader_SetBlocking leave");
  return ecode;
}

static sse_int 
TSensorReader_SetInterfaceAttributes(TSensorReader* self, sse_int in_speed, sse_int in_parity) {
  struct termios tty;
  APP_LOG_DEBUG("TSensorReader_SetInterfaceAttributes enter");
  memset(&tty, 0, sizeof(tty));
  if (tcgetattr(self->fDesc, &tty) != 0) {
    APP_LOG_ERROR("error %d from tcgetattr", errno);
    return SSE_E_GENERIC;
  }

  cfsetospeed(&tty, in_speed);
  cfsetispeed(&tty, in_speed);

  tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;     /* 8-bit chars */
  /* disable IGNBRK for mismatched speed tests; otherwise receive break as \000 chars */
  tty.c_iflag &= ~IGNBRK;         /* ignore break signal */
  tty.c_lflag = 0;                /* no signaling chars, no echo, no canonical processing */
  tty.c_oflag = 0;                /* no remapping, no delays */
  tty.c_cc[VMIN]  = 1;            /* read doesn't block */
  tty.c_cc[VTIME] = 0;            /* 0.5 seconds read timeout */
  tty.c_iflag &= ~(IXON | IXOFF | IXANY); /* shut off xon/xoff ctrl */
  tty.c_cflag |= (CLOCAL | CREAD);        /* ignore modem controls, enable reading */
  tty.c_cflag &= ~(PARENB | PARODD);      /* shut off parity */
  tty.c_cflag |= in_parity;
  tty.c_cflag &= ~CSTOPB;
  tty.c_cflag &= ~CRTSCTS;
  if (tcsetattr(self->fDesc, TCSANOW, &tty) != 0) {
    APP_LOG_ERROR("error %d from tcsetattr", errno);
    return SSE_E_GENERIC;
  }

  APP_LOG_DEBUG("TSensorReader_SetInterfaceAttributes leave");

  return SSE_E_OK;
}

sse_bool 
TSensorReader_Initialize(TSensorReader* self, sse_char* devname) {
  sse_int len;
  APP_LOG_DEBUG("TSensorReader_Initialize enter");
  if (self == NULL) {
    APP_LOG_ERROR("Invalid argument (self == NULL).");
    return sse_false;
  }
  if (devname == NULL) {
    APP_LOG_ERROR("Invalid argument (devname == NULL).");
    return sse_false;
  }

  len = sse_strlen(devname);
  if (len <= 0) {
    APP_LOG_ERROR("Invalid devname.");
    return sse_false;
  }
  self->fDeviceName = (sse_char*)sse_malloc(len + 1);
  if (self->fDeviceName == NULL) {
    APP_LOG_ERROR("Memory shortage.");
    return sse_false;
  }
  sse_memcpy(self->fDeviceName, devname, len);
  self->fDeviceName[len] = 0;
  self->fParity = SENSOR_READER_DEFAULT_PARITY;
  self->fSpeed = SENSOR_READER_DEFAULT_SPEED;

  APP_LOG_DEBUG("devname=%s", self->fDeviceName);
  APP_LOG_DEBUG("TSensorReader_Initialize leave");

  return sse_true;
}

void 
TSensorReader_Finalize(TSensorReader* self) {
  APP_LOG_DEBUG("TSensorReader_Finalize enter");
  if (self == NULL) {
    APP_LOG_ERROR("Invalid argument. (self == NULL)");
    return;
  }
  sse_free(self->fDeviceName);
  APP_LOG_DEBUG("TSensorReader_Finalize leave");
}

sse_int 
TSensorReader_StartReader(TSensorReader* self) {
  sse_int ecode;

  APP_LOG_DEBUG("TSensorReader_StartReader enter");

  self->fDesc = (sse_int)open((char*)self->fDeviceName, O_RDWR | O_NOCTTY | O_NONBLOCK);
  if (self->fDesc < 0) {
    APP_LOG_ERROR("error %d opening %s: %s", errno, self->fDeviceName, strerror(errno));
    return SSE_E_GENERIC;
  }

  ecode = TSensorReader_SetInterfaceAttributes(self, SENSOR_READER_DEFAULT_SPEED, SENSOR_READER_DEFAULT_PARITY);
  if (ecode != SSE_E_OK) {
    APP_LOG_ERROR("TSensorReader_SetInterfaceAttributes failed.");
    goto error_exit;
  }

  ecode = TSensorReader_SetBlocking(self, sse_true);
  if (ecode != SSE_E_OK) {
    APP_LOG_ERROR("TSensorReader_SetBlocking failed.");
    goto error_exit;
  }

  return SSE_E_OK;

  APP_LOG_DEBUG("TSensorReader_StartReader leave");

 error_exit:
  close((int)self->fDesc);

  return ecode;
}

sse_int 
TSensorReader_StopReader(TSensorReader* self) {
  APP_LOG_DEBUG("TSensorReader_StopReader enter");
  if (self->fDesc >= 0) {
    close((int)self->fDesc);
  }
  APP_LOG_DEBUG("TSensorReader_StopReader leave");
  return SSE_E_OK;
}

sse_int 
TSensorReader_ReadData(TSensorReader* self, sse_char* out_buf, sse_int in_buflen) {
  APP_LOG_DEBUG("TSensorReader_ReadData enter");
  if (self == NULL) {
    APP_LOG_ERROR("Invalid argument (self == NULL).");
    return SSE_E_INVAL;
  }
  APP_LOG_DEBUG("TSensorReader_ReadData leave");
  return read(self->fDesc, out_buf, in_buflen);
}


