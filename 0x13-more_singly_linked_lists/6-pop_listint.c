#include "lists.h"
#include <stdlib.h>
int pop_listint(listint_t **head)
{
	listint_t *replace;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	replace = *head;
	*head = replace->next;
	n = replace->n;
	free(replace);
	return (n);
}
