#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *link;
	list_t *tmp;

	link = malloc(sizeof(list_t));
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
	while (temp->next)
		tmp = tmp->link;
	tmp->next = link;
	return (link);
}
