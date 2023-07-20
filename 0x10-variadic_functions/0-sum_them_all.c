#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: const unsigned int n
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
