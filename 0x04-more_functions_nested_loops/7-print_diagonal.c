#include<stdio.h>
#include"main.h"
/**
 * print_diagonal - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: int n
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
