#include"main.h"
/**
 * puts2 - Entry point
 *
 * Description: 'the program's descriptor'
 * @str: char str
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 1)
		{
			str++;
		}
		else
		{
			putchar(*str);
			str++;
		}
	}
	putchar('\n');
}
