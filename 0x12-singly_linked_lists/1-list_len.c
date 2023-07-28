#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	int s;

	while(h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
