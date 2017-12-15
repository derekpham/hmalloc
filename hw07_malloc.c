#include <stdio.h>
#include <string.h>

#include "xmalloc.h"
#include "hmalloc.h"

/* CH02 TODO:
 *  - This should call / use your HW07 alloctor,
 *    modified to be thread-safe and have a realloc function.
 */

void *xmalloc(size_t bytes)
{
	return hmalloc(bytes);
}

void xfree(void *ptr)
{
	hfree(ptr);
}

void *xrealloc(void *prev, size_t bytes)
{
	void *ret_val = xmalloc(bytes);
	memcpy(ret_val, prev, bytes);
	xfree(prev);
	return ret_val;
}
