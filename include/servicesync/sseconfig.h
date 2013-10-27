/*
 * LEGAL NOTICE
 *
 * Copyright (C) 2012-2013 InventIt Inc. All rights reserved.
 *
 * This source code, product and/or document is protected under licenses 
 * restricting its use, copying, distribution, and decompilation.
 * No part of this source code, product or document may be reproduced in
 * any form by any means without prior written authorization of InventIt Inc.
 * and its licensors, if any.
 *
 * InventIt Inc.
 * 9F KOJIMACHI CP BUILDING
 * 4-4-7 Kojimachi, Chiyoda-ku, Tokyo 102-0083
 * JAPAN
 * http://www.yourinventit.com/
 */

#ifndef __SSE_CONFIG_H__
#define __SSE_CONFIG_H__

/* #define SSE_CONFIG_ENABLE_MEMORY_DEBUG */

/* premitive data type configuration */
#define SSE_CONFIG_USE_INT64
#define SSE_CONFIG_USE_SINGLE_FLOAT
#define SSE_CONFIG_USE_DOUBLE_FLOAT

/* OMA DM client configuration */
#define _SUPPORT_STRUCTDATA

/* logging configuration */
#define SSE_LOG_ENABLE_ERROR
#define SSE_LOG_ENABLE_WARN
#define SSE_LOG_ENABLE_INFO
#define SSE_LOG_ENABLE_TRACE
#define SSE_LOG_ENABLE_DEBUG

/* SSL configuration */
#define SSE_CONFIG_ENABLE_SSL
#define SSE_CONFIG_DISABLE_CERT_ERROR

/* debug configuration */
#define SSE_ENABLE_DEBUG

#ifndef NULL
#ifdef __cplusplus
#define NULL				(0L)
#else /* __cplusplus */
#define NULL				((void*) 0)
#endif /* __cplusplus */
#endif	/* !NULL */

typedef unsigned char sse_byte;
typedef char sse_int8;
typedef unsigned char sse_uint8;
typedef short sse_int16;
typedef unsigned short sse_uint16;
typedef int sse_int32;
typedef unsigned int sse_uint32;
#ifdef SSE_CONFIG_USE_INT64
typedef long long sse_int64;			/* todo */
typedef unsigned long long sse_uint64;	/* todo */
#endif /* SSE_CONFIG_USE_INT64 */
#ifdef SSE_CONFIG_USE_SINGLE_FLOAT
typedef float sse_float;
#endif /* SSE_CONFIG_USE_SINGLE_FLOAT */
#ifdef SSE_CONFIG_USE_DOUBLE_FLOAT
typedef double sse_double;
#endif /* SSE_CONFIG_USE_DOUBLE_FLOAT */
typedef int sse_int;
typedef unsigned int sse_uint;
typedef char sse_char;
typedef unsigned char sse_uchar;
typedef sse_uint32 sse_size;
typedef sse_int32 sse_ssize;
typedef sse_int sse_bool;	// todo
typedef void* sse_pointer;

#ifdef _WIN32
typedef struct _stat sse_stat;
typedef int	sse_open_mode;
#else
#include <sys/stat.h>
typedef struct stat sse_stat;
typedef	mode_t	sse_open_mode;
#endif

#ifdef WIN32
#define SSE_EXPORT_SYM			__declspec(dllexport)
#define SSE_IMPORT_SYM			__declspec(dllimport)
#else /* WIN32 */
#define SSE_EXPORT_SYM
#define SSE_IMPORT_SYM
#endif /* WIN32 */

#define MOAT_API		SSE_EXPORT_SYM

#endif /* __SSE_CONFIG_H__ */
