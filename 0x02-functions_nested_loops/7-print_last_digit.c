#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: int n
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		m *= -1;
	}
	_putchar(m + '0');
	return (m);
}
