#include<stdio.h>
#include "main.h"
/**
 * *_memset - Entry point
 *
 * Description: 'the program's descriptor'
 * @s: char s
 * @b: char b
 * @n: int n
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	
	while(n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
