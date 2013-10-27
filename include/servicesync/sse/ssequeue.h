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

#ifndef SSEQUEUE_H_
#define SSEQUEUE_H_

SSE_BEGIN_C_DECLS

typedef struct SSEQueue_ SSEQueue;

struct SSEQueue_ {
	SSEList *head;
	SSEList *tail;
	sse_int length;
};

SSEQueue * sse_queue_new(void);
void sse_queue_free(SSEQueue *q);

void sse_queue_clear(SSEQueue *q);
sse_int sse_queue_enqueue(SSEQueue *q, sse_pointer data);
sse_pointer sse_queue_dequeue(SSEQueue *q);
sse_pointer sse_queue_peek_next(SSEQueue *q);
sse_bool sse_queue_is_empty(SSEQueue *q);

SSE_END_C_DECLS

#endif /* SSEQUEUE_H_ */
