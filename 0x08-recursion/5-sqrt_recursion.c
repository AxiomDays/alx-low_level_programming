#include<stdio.h>
#include "main.h"
/**
 * nrtcheck - Entry point
 *
 * Description: 'the program's descriptor'
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
 */
int nrtcheck(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (nrtcheck(a + 1, b));
}

/**
 * _sqrt_recursion - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: int n
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (nrtcheck(1, n));
}
