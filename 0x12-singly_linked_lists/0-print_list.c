#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int s = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (null)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		s++;
		h = h->next;
	}
	return (s);
}
