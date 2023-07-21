#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry point
 *
 * Description: 'the program's descriptor'
 * @format: const char * const format
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int flag;
	char *s;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 0;
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
