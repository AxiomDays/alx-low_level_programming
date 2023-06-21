#include<stdio.h>
#include"main.h"

/**
 * _islower - Entry point
 *
 * Description: 'the program's descriptor'
 * @parameter: int c
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
