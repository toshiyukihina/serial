#ifndef __SENSOR_READER_H__
#define __SENSOR_READER_H__

SSE_BEGIN_C_DECLS

#define SENSOR_READER_DEFAULT_SPEED B38400
#define SENSOR_READER_DEFAULT_PARITY (0)
#define SENSOR_READER_DEFAULT_READ_TIMEOUT (1)

typedef struct TSensorReader_ TSensorReader;
struct TSensorReader_ {
  sse_char* fDeviceName;
  sse_int fDesc;
  sse_int fSpeed;
  sse_int fParity;
};

sse_bool TSensorReader_Initialize(TSensorReader* self, sse_char* in_devname);
void TSensorReader_Finalize(TSensorReader* self);
sse_int TSensorReader_StartReader(TSensorReader* self);
sse_int TSensorReader_StopReader(TSensorReader* self);
sse_int TSensorReader_ReadData(TSensorReader* self, sse_char* out_buf, sse_int in_buflen);

SSE_END_C_DECLS

#endif /* __FTDI_READER_H__ */
