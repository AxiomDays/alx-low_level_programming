#include<stdio.h>

int main(void)
{
	int x;

	for (x = 'a';x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			return (0);
		}
		else
		{
			putchar(x);
		}
	}

	return (0);
}
