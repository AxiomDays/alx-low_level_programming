#include<stdio.h>

int main(void)
{
	int x;

	for (x = 'a';x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}