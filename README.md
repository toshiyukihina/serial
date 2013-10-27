Linux serial programming.
======

You can build and run this program on general Linux distribution perhaps.
For now, tested on debian linux.

## Prerequisites ##

You must install the depending libraries as below.

```
apt-get install libev-dev
```

## How to build ##

```
cd serial
./configure
make
```

## How to run ##

```
./src/serial_sample
```

You will see the debug message on the console show below:

```
...
[DEBUG] <serial-sample> main.c:SensorReaderProc():L36 69 bytes data read.
[DEBUG] <serial-sample> main.c:DumpSerialData():L27 fe404a9000936cd3a232034e218165ffffffffffff00816ffffffffffff00fe15ffffffffffff00f415ffffffffffff00ea15ffffffffffff00e01529
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L163 TSensorReader_ReadData enter
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L168 TSensorReader_ReadData leave
[DEBUG] <serial-sample> main.c:SensorReaderProc():L36 -1 bytes data read.
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L163 TSensorReader_ReadData enter
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L168 TSensorReader_ReadData leave
[DEBUG] <serial-sample> main.c:SensorReaderProc():L36 -1 bytes data read.
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L163 TSensorReader_ReadData enter
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L168 TSensorReader_ReadData leave
[DEBUG] <serial-sample> main.c:SensorReaderProc():L36 138 bytes data read.
[DEBUG] <serial-sample> main.c:DumpSerialData():L27 fe404a90926936cd3a23208ba016e115801513220006e11811523110006411811513180005a11811523a00050118114f3210004611a2fe404a90936936ce3a2320e09d1c01258215e36000c0128216331000b6128215d32000ac128215f34000a21282163350009812ec
[DEBUG] <serial-sample> sensor_reader.c:TSensorReader_ReadData():L163 TSensorReader_ReadData enter
...
```


