#include<stdio.h>
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}

	return (0);
}
