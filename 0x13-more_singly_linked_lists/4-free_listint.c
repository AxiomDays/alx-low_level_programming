#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
