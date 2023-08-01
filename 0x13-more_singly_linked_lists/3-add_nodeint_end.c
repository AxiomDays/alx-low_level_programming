#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *link;
	listint_t *tmp;

	link = malloc(sizeof(listint_t));
	if (link == NULL)
	{
		return (NULL);
	}
	link->n = n;
	link->next = NULL;
	if (*head == NULL)
	{
		*head = link;
		return (link);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = link;
	return (link);
}
