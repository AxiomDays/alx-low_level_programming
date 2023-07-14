#include "main.h"
#include<stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: void ptr
 * @old_size: int old_size
 * @new_size: int new_size
 *
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *q;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		q = malloc(new_size);
		return (q);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	q = malloc(new_size);
	if (q == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		n = old_size;
	}
	for (i = 0; i < n; i++)
	{
		q[i] = oldp[i];
	}
	free(ptr);
	return (q);
}
