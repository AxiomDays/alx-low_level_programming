#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * _strdup - Entry point
 *
 * Description: 'the program's descriptor'
 * @str: char str
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	int i;
	int strlen = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		strlen++;
	}


	s = malloc(sizeof(char) * (strlen + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0';)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
