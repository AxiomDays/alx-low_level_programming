#include<stdio.h>
#include"main.h"
/**
 * print_line - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: int n
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
