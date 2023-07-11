#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * *create_array - Entry point
 *
 * Description: 'the program's descriptor'
 * @size: int size
 * @c: char c
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{	
	char *i;
	unsigned int k;

	if (size == '0')
	{
		return (NULL);
	}
	
	i = (char *)malloc(size * sizeof(char));

	if (i == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		i[k] = c;
	}
	return (i);
}
