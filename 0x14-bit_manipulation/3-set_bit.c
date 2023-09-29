#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int div;

	div = 1 << index;
	*n = *n | div;
	return 1;
}
