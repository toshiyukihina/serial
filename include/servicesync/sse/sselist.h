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


#ifndef SSELIST_H_
#define SSELIST_H_

SSE_BEGIN_C_DECLS

typedef struct SSEList_ SSEList;

struct SSEList_ {
	sse_pointer data;
	SSEList *prev;
	SSEList *next;
};

SSEList * sse_list_new(void);
void sse_list_free(SSEList *list);

SSEList * sse_list_add(SSEList *list, sse_pointer data);
SSEList * sse_list_add_first(SSEList *list, sse_pointer data);
SSEList * sse_list_concat(SSEList *list, SSEList *cat_list);
SSEList * sse_list_remove(SSEList *list, sse_pointer data);
SSEList * sse_list_remove_all(SSEList *list, sse_pointer data);
SSEList * sse_list_unlink(SSEList *list, SSEList *link);
SSEList * sse_list_find(SSEList *list, sse_pointer data);
SSEList * sse_list_foreach(SSEList *list, sse_pointer data, SSECompareProc proc);
SSEList * sse_list_get(SSEList *list, sse_int i);
sse_pointer sse_list_get_data(SSEList *list, sse_int i);
SSEList * sse_list_last(SSEList *list);
sse_uint sse_list_length(SSEList *list);

#define sse_list_data(l)		((l == NULL) ? NULL : (((SSEList *)(l))->data))
#define sse_list_prev(l)		((l == NULL) ? NULL : (((SSEList *)(l))->prev))
#define sse_list_next(l)		((l == NULL) ? NULL : (((SSEList *)(l))->next))

SSE_END_C_DECLS

#endif /* SSELIST_H_ */
