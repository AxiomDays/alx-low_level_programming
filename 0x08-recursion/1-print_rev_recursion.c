#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Entry point
 *
 * Description: 'the program's descriptor'
 * @s: string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
