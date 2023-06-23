#include<stdio.h>
#include"main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
			printf(" ");
		}
		else
		{
			putchar(i);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
