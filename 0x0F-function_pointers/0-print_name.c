#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Entry point
 *
 * Description: 'the program's descriptor'
 * @name: char name
 * @f: void f
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
