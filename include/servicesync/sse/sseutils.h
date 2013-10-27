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

#ifndef SSE_UTIL_H__
#define SSE_UTIL_H__

SSE_BEGIN_C_DECLS

#define sse_is_upper_case(c)			((c) >= 'A' && (c) <= 'Z')
#define sse_is_lower_case(c)			((c) >= 'a' && (c) <= 'z')

sse_char *sse_strcpy(sse_char *s1, const sse_char *s2);
sse_char * sse_strncpy(sse_char *s1, const sse_char *s2, sse_size n);
sse_char *sse_strcat(sse_char *s1, const sse_char *s2);
sse_int sse_strcmp(const sse_char *s1, const sse_char *s2);
sse_int sse_strncmp(const sse_char *s1, const sse_char *s2, sse_size n);
sse_int sse_strcasecmp(const sse_char *s1, const sse_char *s2);
sse_int sse_strncasecmp(const sse_char *s1, const sse_char *s2, sse_size n);
sse_int sse_strlen(const sse_char *s);
sse_char * sse_strstr(const sse_char *s1, const sse_char *s2);
sse_char * sse_strchr(const sse_char *s, sse_int c);
sse_char * sse_strnchr(const sse_char *s, sse_size len, sse_int c);
sse_char * sse_strrchr(const sse_char *s, sse_int c);
sse_char * sse_strndup(const sse_char *s, sse_size n);
sse_char * sse_strdup(const sse_char *s);

sse_char *sse_u16tohex(sse_uint16 val, sse_char *buf);

sse_byte sse_hexntobyte(sse_char *s, sse_int n);
sse_byte sse_hextobyte(sse_char *s);
sse_uint16 sse_hexntou16(sse_char *s, sse_int n);
sse_uint16 sse_hextou16(sse_char *s);
sse_uint32 sse_hexntou32(sse_char *s, sse_int n);
sse_uint32 sse_hextou32(sse_char *s);

void *sse_memcpy(void *buf1, const void *buf2, sse_size size);
void *sse_memset(void *buf, sse_int32 ch, sse_size n);
sse_int sse_memcmp(void *buf1, void *buf2, sse_size size);
void * sse_memdup(void *in_buff, sse_size in_size);

sse_char sse_to_lower_case(const sse_char in_c);
sse_char sse_to_upper_case(const sse_char in_c);

#ifndef	SSE_CONFIG_ENABLE_MEMORY_DEBUG
sse_pointer sse_malloc(sse_size size);
#else /* SSE_CONFIG_ENABLE_MEMORY_DEBUG */
#define sse_malloc(size)		ssep_mem_alloc(size)
#endif /* SSE_CONFIG_ENABLE_MEMORY_DEBUG */
void sse_free(sse_pointer p);

sse_char *sse_itoa(sse_int val, sse_char *buf);

sse_int sse_atoi(sse_char *s);
sse_int sse_antoi(sse_char *s1, sse_int32 n);

sse_int32 sse_div(sse_int32 num, sse_int32 den);
sse_int16 sse_div16(sse_int16 num, sse_int16 den);
sse_int32 sse_div32(sse_int32 num, sse_int32 den);
sse_int64 sse_div64(sse_int64 num, sse_int64 den);
sse_int32 sse_mod(sse_int32 num, sse_int32 den);
sse_int16 sse_mod16(sse_int16 num, sse_int16 den);
sse_int32 sse_mod32(sse_int32 num, sse_int32 den);
sse_int64 sse_mod64(sse_int64 num, sse_int64 den);

#ifdef	_SUPPORT_STRUCTDATA
sse_char *sse_strstr(const sse_char *s1, const sse_char *s2);
sse_char *sse_strchr(const sse_char *s, sse_int c);
sse_char *sse_strrchr(const sse_char *s, sse_int c);
#endif	// _SUPPORT_STRUCTDATA

SSE_END_C_DECLS

#endif /* SSE_UTIL_H__ */
