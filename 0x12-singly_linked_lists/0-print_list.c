#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Entry point
 *
 * Description: 'the program's descriptor'
 * @list_t n: const list_t *n
 * Return: Always 0 (Success)
 */
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
