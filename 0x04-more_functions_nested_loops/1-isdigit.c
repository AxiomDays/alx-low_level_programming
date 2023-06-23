#include<stdio.h>
#include"main.h"
/**
 * _isdigit - Entry point
 *
 * Description: 'the program's descriptor'
 * @c: int c
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
