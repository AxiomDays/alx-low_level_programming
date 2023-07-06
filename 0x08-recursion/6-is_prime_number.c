#include <stdio.h>
#include "main.h"
/**
 * checker - Entry point
 *
 * Description: 'the program's descriptor'
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
 */
int checker (int a, int b)
{
	if (b < 2 || b % 2 == 0)
	{
		return (0);
	}
	else if (b / 2 < a)
	{
		return (1);
	}
	else
	{
		return (checker(a + 1, b));
	}
}
/**
 * is_prime_number - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: int n
 * Return: Always 0 (Success)
 */
int is_prime_number (int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}

