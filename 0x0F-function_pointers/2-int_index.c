#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Entry point
 *
 * Description: 'the program's descriptor'
 * @array: int array
 * @size: int size
 * @cmp: int cmp
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
