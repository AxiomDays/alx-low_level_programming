#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 * @argc: int argc
 * @argv: char argv
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;
	int valuex;
	int valuey;

	if (argc != 3)
	{
		printf("Error");
		putchar('\n');
		return (1);
	}
	else
	{
		valuex = strtol(argv[1], NULL, 10);
		valuey = strtol(argv[2], NULL, 10);
		mul = valuex * valuey;
		printf("%d", mul);
		putchar('\n');
		return (0);
	}
}
