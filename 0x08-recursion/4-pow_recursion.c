#include<stdio.h>
#include "main.h"
/**
 * _pow_recursion - Entry point
 *
 * Description: 'the program's descriptor'
 * @x: int x
 * @y: int y
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		x *= _pow_recursion(x, y - 1);
		return (x);
	}
	else if (y == 0)
	{
		x = 1;
		return (x);
	}
	else
	{
		return (-1);
	}

}
