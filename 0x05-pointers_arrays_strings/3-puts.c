#include"main.h"
/**
 * _puts - Entry point
 *
 * Description: 'the program's descriptor'
 * @str: char str
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		str++;
		putchar(*str);
	}

}
