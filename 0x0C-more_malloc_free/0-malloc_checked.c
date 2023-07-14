#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 *
 * Description: 'the program's descriptor'
 * @b: int b
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
