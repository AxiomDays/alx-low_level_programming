#include<stdio.h>
#include<stdlib.h>
#include"main.h"

int *array_range(int min, int max)
{
	int *i;
	int j;
	int k = 0;

	if (min > max)
		return (NULL);

	i = malloc(sizeof(int) * (max - min + 1));
	if (i == NULL)
		return (NULL);

	for (j = min; j < (max + 1); j++)
	{
		i[k] = j;
		k++;
	}
	return (i);
}
