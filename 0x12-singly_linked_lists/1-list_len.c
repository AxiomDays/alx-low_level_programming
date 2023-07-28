#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	int s = 0;

	while(h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
