#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ret;
	unsigned long int bin;

	bin  = 1 << index;
	ret = n & bin;

	if (ret == bin)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
