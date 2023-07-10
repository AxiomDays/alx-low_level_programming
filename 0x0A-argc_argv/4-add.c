#include<stdio.h>
#include<ctype.h>
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
	int i;
	int j;
	int sum;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		sum = strtol(argv[i], NULL, 10);
		if (argc < 2)
		{
			printf("0");
			putchar('\n');
			break;
		}
		else if (isdigit(sum) == 1)
		{
			printf("Error");
			putchar('\n');
			return (1);
		}
		else
		{
			for (j = 1; j < argc; j++)
			{
				sum = strtol(argv[j], NULL, 10);
				add = add + sum;
			}
			printf("%d", add);
			putchar('\n');
			break;
		}
	}
		return (0);
}
