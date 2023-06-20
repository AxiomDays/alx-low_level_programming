#include<stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = 0; x >= 9; x++)
	{
		putchar(48 + x);
		for (y = 0; y >= 9; y++)
		{
			putchar(48 + y);
		}
		putchar(',');
	}
	putchar('\n');
	return (0);
}
