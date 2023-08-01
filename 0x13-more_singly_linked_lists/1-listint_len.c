#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t listint_len(const listint_t *h)
{
	int s = 0;

	while(h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
