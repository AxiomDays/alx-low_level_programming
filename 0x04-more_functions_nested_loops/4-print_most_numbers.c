#include<stdio.h>
#include"main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
