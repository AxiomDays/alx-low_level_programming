#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *link;

	link = malloc(sizeof(listint_t));
	if (link == NULL)
		return (NULL);
	link->n = n;
	link->next = *head;
	*head = link;

	return (link);
}
