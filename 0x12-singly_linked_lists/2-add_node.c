#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - function that returns the length of a string.
 * @s : const char *str
 * Return: x
 */

int _strlen(const char *str)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *link;

	link = malloc(sizeof(list_t));
	if (link == NULL)
		return (NULL);
	link->str = strdup(str);

	link->len = _strlen(str);
	link->next = *head;
	*head = link;

	return (link);
}
