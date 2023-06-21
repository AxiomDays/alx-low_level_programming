#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

}
