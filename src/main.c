#include <servicesync/moat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ev.h>
#include "sensor_reader.h"
#include "app_debug.h"

/* NOTICE: 'DEVNAME' depends on your execution environment, 
   so you must change the name as your environment. 
   You can confirm the attached device name with 'dmesg' on standard linux OS.
*/
#define DEVNAME "/dev/ttyUSB0"

#define SENSOR_READER_DEFAULT_TIMER_INTERVAL (1) /* sec */
#define ENOUGH_BUFSIZE (512)

static TSensorReader sSensorReader;

static void 
DumpSerialData(sse_char* in_buf, sse_int in_buflen) {
  sse_char buf[ENOUGH_BUFSIZE];
  sse_int i, nwritten;
  for (i = 0, nwritten = 0; i < in_buflen; i++) {
    nwritten += sprintf(buf + nwritten, "%x", in_buf[i] & 0xff);
  }
  APP_LOG_DEBUG("%s", buf);
}

static void
SensorReaderProc(struct ev_loop* loop, ev_periodic* in_arg, int in_revents) {
  sse_char buf[ENOUGH_BUFSIZE];
  sse_int nread;

  nread = TSensorReader_ReadData(&sSensorReader, buf, sizeof(buf));
  APP_LOG_DEBUG("%d bytes data read.", nread);
  if (nread > 0) {
    /*! \todo You can parse read data here or push data to some buffer, for example circular buffer.
     * Tentatively we dump data read via serial for debugging. 
     */
    DumpSerialData(buf, nread);
  }
}

int main(int argc, char* argv[]) {
  sse_bool bcode;
  sse_int ecode;
  struct ev_loop* loop;
  ev_periodic reader_timer;

  bcode = TSensorReader_Initialize(&sSensorReader, DEVNAME);
  if (! bcode) {
    APP_LOG_ERROR("TSensorReader_Initialize failed");
    return EXIT_FAILURE;
  }

  ecode = TSensorReader_StartReader(&sSensorReader);
  if (ecode != SSE_E_OK) {
    APP_LOG_ERROR("TSensorReader_StartReader failed");
    goto error_exit_1;
  }

  /* We use 'libev' for message loop to poll serial every 'SENSOR_READER_DEFAULT_TIMER_INTERVAL' seconds and read data.
   * This is because polling is so simple.
   */
  loop = ev_default_loop(0);
  ev_periodic_init(&reader_timer, SensorReaderProc, 0, (ev_tstamp)SENSOR_READER_DEFAULT_TIMER_INTERVAL, 0);
  ev_periodic_start(loop, &reader_timer);
  /* Forever blocks until ev_quit() is called. In this program, we don't call ev_quit().
   * You can stop this program by CTRL-C.
   */
  ev_run(loop, 0);

  TSensorReader_StopReader(&sSensorReader);
  TSensorReader_Finalize(&sSensorReader);

  return EXIT_SUCCESS;

 error_exit_1:
  TSensorReader_Finalize(&sSensorReader);

  return EXIT_FAILURE;
}
