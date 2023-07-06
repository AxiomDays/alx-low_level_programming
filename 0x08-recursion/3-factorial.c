#include <stdio.h>
#include "main.h"
/**
 * factorial - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: int n
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n > 0)
	{
		n *= factorial(n - 1);
		return (n);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
