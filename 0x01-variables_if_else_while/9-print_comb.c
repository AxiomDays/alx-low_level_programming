#include<stdio.h>

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(48 + x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
