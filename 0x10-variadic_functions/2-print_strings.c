#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Entry point
 *
 * Description: 'the program's descriptor'
 * @separator: char separator
 * @n: int n
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;
	
	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n ; i++)
		{
			strings = va_arg(args, char *);
			printf("%s", strings);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			strings = va_arg(args, char *);
			if (i == (n - 1))
			{
				printf("%s", strings);
			}
			else
			{
				printf("%s", strings);
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	putchar('\n');
}
