#include<stdio.h>
#include"main.h"

/**
 * _isalpha - Entry point
 *
 * Description: 'the program's descriptor'
 * @c: int c
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
