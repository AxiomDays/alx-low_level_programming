#include<stdio.h>
#include"main.h"

int print_last_digit(int n)
{
	
	int m = n % 10;
	putchar(m);
	return (m);
}
