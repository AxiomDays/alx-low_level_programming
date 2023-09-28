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
		printf("string is null");
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			printf("non binary value found\n");
			return 0;
			break;
		}
		else
		{
			bin_num = bin_num * 10 + (b[i] - 48);
			printf("bin_num = %d\n", bin_num);
		}
	}
	while (bin_num != 0)
	{
		rem = bin_num % 10;
		printf("%d ", dec_num);
		bin_num = bin_num / 10;
		dec_num = dec_num + rem * base;
		base = base * 2;
		printf("%d %d\n", bin_num, dec_num);
	}
	printf("test ");
	return dec_num;
}
