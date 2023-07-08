#include "main.h"
/**
 * _puts - Entry point
 *
 * Description: 'the program's descriptor'
 * @s: char s
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
