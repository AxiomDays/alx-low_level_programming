#include<stdio.h>

int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		putchar(48 + x);
	}

	 for (x = 'a'; x <= 'f'; x++)
        {
                putchar(x);
        }
	
	putchar('\n');
	return (0);
}
