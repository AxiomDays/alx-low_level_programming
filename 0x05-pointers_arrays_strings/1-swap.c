#include<stdio.h>
#include"main.h"
/**
 * swap_int - Entry point
 *
 * Description: 'the program's descriptor'
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
