#include "main.h"
#include <stdio.h>
/**
 * OB
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bin_num = 0;
	unsigned int dec_num = 0;
	int rem = 0;
	int base = 1;
	if (b == 0)
	{
		return 0;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return 0;
			break;
		}
		else
		{
			bin_num = bin_num * 10 + (b[i] - 48);
		}
	}
	while (bin_num != 0)
	{
		rem = bin_num % 10;
		bin_num = bin_num / 10;
		dec_num = dec_num + rem * base;
		base = base * 2;
	}
	return dec_num;
}
