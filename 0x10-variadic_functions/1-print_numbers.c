#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;

	va_list args;
	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n ; i++)
		{
			nums = va_arg(args, int);
			printf("%d", nums);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(args, int);
			if (i == (n-1))
			{
				printf("%d", nums);
			}
			else
			{
				printf("%d", nums);
				printf("%c ", *separator);
			}
		}
	}
	va_end(args);
	putchar('\n');
}
