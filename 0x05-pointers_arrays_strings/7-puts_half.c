#include"main.h"
#include<stdio.h>
/**
 * puts_half - Entry point
 *
 * Description: 'the program's descriptor'
 * @str: char str
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, j;
	int len = 0;

	for (i = 0; str[len] != '\0'; i++)
	{
		len++;
	}
	
	if (len + 1 % 2 != '0')
		j = (len - 1) / 2;
	else
		j = len / 2;

	for (len = j; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
		printf("second loop started");
	}
 	_putchar('\n');
}
