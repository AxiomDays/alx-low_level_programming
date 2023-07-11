#include<stdio.h>
#include"main.h"
#include<stdlib.h>

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
