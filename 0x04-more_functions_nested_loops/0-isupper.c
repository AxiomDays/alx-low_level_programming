#include<stdio.h>
#include"main.h"

/**
 * _isupper - Entry point
 *
 * Description: 'the program's descriptor'
 * @c - int c
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
