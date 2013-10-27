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

#ifndef SSEBASE_H__
#define SSEBASE_H__

#ifdef __cplusplus
#define SSE_BEGIN_C_DECLS	extern "C" {
#define SSE_END_C_DECLS		}
#else /* !__cplusplus */
#define SSE_BEGIN_C_DECLS
#define SSE_END_C_DECLS
#endif /* __cplusplus */

typedef sse_int32 sse_result;

#define sse_false			(0)
#define sse_true			(!sse_false)

typedef sse_int (*SSECompareProc)(sse_pointer a, sse_pointer b);

/* error code : TODO */
#define SSE_E_OK			(0)
#define SSE_E_GENERIC		(-1)
#define SSE_E_NOMEM			(-2)
#define SSE_E_INVAL			(-3)
#define SSE_E_NOENT			(-4)
#define SSE_E_ALREADY		(-5)
#define SSE_E_AGAIN			(-6)
#define SSE_E_INPROGRESS	(-7)
#define SSE_E_PERM			(-8)
#define SSE_E_ACCES			(-9)
#define SSE_E_TIMEDOUT		(-10)
#define SSE_E_INTR			(-11)

#define SSE_INT16_MIN	(-32767 - 1)
#define SSE_INT16_MAX	(32767)
#define SSE_UINT16_MAX	(0xFFFF)
#define SSE_INT32_MIN	(-2147483647 - 1)
#define SSE_INT32_MAX	(2147483647)
#define SSE_UINT32_MAX	(0xFFFFFFFF)

#define SSE_SHA1_HASH_LENGTH	(20)

#define SSE_ARRAY_SIZE(arr)			(sizeof((arr)) / sizeof((arr)[0]))

#define SSE_LOG_TYPE_SYMBOL_ERROR	"** ERROR **"
#define SSE_LOG_TYPE_SYMBOL_WARN	"* WARNING *"
#define SSE_LOG_TYPE_SYMBOL_INFO	"INFO"
#define SSE_LOG_TYPE_SYMBOL_DEBUG	"DEBUG"
#define SSE_LOG_TYPE_SYMBOL_TRACE	"TRACE"

#define SSE_LOG(category, type, tag, format, ...)	ssep_log_print(category, "[" type "]" tag " %s:%s():L%d " format, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)

#ifdef SSE_LOG_ENABLE_ERROR
#define SSE_LOG_ERROR(tag, format, ...)	SSE_LOG(SSE_LOG_CATEGORY_ERROR, SSE_LOG_TYPE_SYMBOL_ERROR, tag, format, ##__VA_ARGS__)
#else /* SSE_LOG_ENABLE_ERROR */
#define SSE_LOG_ERROR(tag, format, ...)
#endif /* SSE_LOG_ENABLE_ERROR */

#ifdef SSE_LOG_ENABLE_WARN
#define SSE_LOG_WARN(tag, format, ...)	SSE_LOG(SSE_LOG_CATEGORY_WARN, SSE_LOG_TYPE_SYMBOL_WARN, tag, format, ##__VA_ARGS__)
#else /* SSE_LOG_ENABLE_WARN */
#define SSE_LOG_WARN(tag, format, ...)
#endif /* SSE_LOG_ENABLE_WARN */

#ifdef SSE_LOG_ENABLE_INFO
#define SSE_LOG_INFO(tag, format, ...)	SSE_LOG(SSE_LOG_CATEGORY_INFO, SSE_LOG_TYPE_SYMBOL_INFO, tag, format, ##__VA_ARGS__)
#else /* SSE_LOG_ENABLE_INFO */
#define SSE_LOG_INFO(tag, format, ...)
#endif /* SSE_LOG_ENABLE_INFO */

#ifdef SSE_LOG_ENABLE_TRACE
#define SSE_LOG_TRACE(tag, format, ...)	SSE_LOG(SSE_LOG_CATEGORY_TRACE, SSE_LOG_TYPE_SYMBOL_TRACE, tag, format, ##__VA_ARGS__)
#else /* SSE_LOG_ENABLE_TRACE */
#define SSE_LOG_TRACE(tag, format, ...)
#endif /* SSE_LOG_ENABLE_TRACE */

#ifdef SSE_LOG_ENABLE_DEBUG
#define SSE_LOG_DEBUG(tag, format, ...)	SSE_LOG(SSE_LOG_CATEGORY_DEBUG, SSE_LOG_TYPE_SYMBOL_DEBUG, tag, format, ##__VA_ARGS__)
#else /* SSE_LOG_ENABLE_DEBUG */
#define SSE_LOG_DEBUG(tag, format, ...)
#endif /* SSE_LOG_ENABLE_DEBUG */

#define SSE_TAG						"SSE"
#define SSE_TRACE_ENTER()			SSE_LOG_TRACE(SSE_TAG, "enter")
#define SSE_TRACE_EXIT()			SSE_LOG_TRACE(SSE_TAG, "exit")

#define SSE_ASSERT(cond)			((cond) ? (void)0 : SSE_LOG_DEBUG("ASSERTION FAILED:" ##cond))

#endif /* SSEBASE_H__ */
