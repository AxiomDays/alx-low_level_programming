#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Entry point
 *
 * Description: 'the program's descriptor'
 * @separator: char separator
 * @n: unsigned int n
 * Return: Always 0 (Success)
 */
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
			if (i == (n - 1))
			{
				printf("%d", nums);
			}
			else
			{
				printf("%d", nums);
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	putchar('\n');
}
