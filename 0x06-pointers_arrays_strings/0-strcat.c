#include"main.h"
/**
 * *_strcat - Entry point
 * 
 * Description: 'the program's descriptor'
 * @dest: char dest
 * @src: char src
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
