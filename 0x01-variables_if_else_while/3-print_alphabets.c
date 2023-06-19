#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int x;
	for (x = 'A'; x <= 'Z'; x++)
    {
	putchar(tolower(x));
    }
	for (x = 'A'; x <= 'Z'; x++)
    {
        putchar(x);
    }
	putchar('\n');
	return 0;
}
