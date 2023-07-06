#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Entry point
 *
 * Description: 'the program's descriptor'
 * @s: char s
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
