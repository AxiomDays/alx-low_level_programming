#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	int s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
