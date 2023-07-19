#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 *
 * Description: 'the program's descriptor'
 * @array: int array
 * @size: size_t size
 * @action: void action
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL && array != NULL)
		{
			action(array[i]);
		}
	}
}
