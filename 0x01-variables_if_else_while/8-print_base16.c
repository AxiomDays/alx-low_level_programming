#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(48 + x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
