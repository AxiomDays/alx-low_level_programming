#include<stdio.h>
#include<stdlib.h>
#include"main.h"

void mul (int argc, char *argv)
{
	mul = argv[1] * argv[2];
	if (argc != 3)
	{
		printf("Error");
		putchar('\n');
		exit(98);
	}
	else
	{
		printf("%d", mul);
		putchar('\n');
	}
	return (0);
}
