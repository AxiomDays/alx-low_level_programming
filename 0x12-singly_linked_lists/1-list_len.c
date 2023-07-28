#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

size_t list_len(const list_t *h)
{
	int s;

	while(h)
	{
		count++;
		h = h->next;
	}
	return (s);
}
