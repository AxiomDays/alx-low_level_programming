#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - Entry point
 *
 * Description: 'the program's descriptor'
 * @s: char s
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i += _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
