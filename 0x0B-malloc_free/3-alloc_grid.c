#include<stdio.h>
#include"main.h"
#include<stdlib.h>

int **alloc_grid(int width, int height)
{
	int *array;

	if (width == 0 || height == 0)
	{
		return (0);
	}
	else
	{
		array = malloc(sizeof(int) * (width * height));
		return (array);
	}
}
