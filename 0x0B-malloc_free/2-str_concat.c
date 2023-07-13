#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * str_concat - Entry point
 *
 * Description: 'the program's descriptor'
 * @s1: char s1
 * @s2: char s2
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	char *string;
	int strlen1 = 0;
	int strlen2 = 0;
	int strlenTotal = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		strlen1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		strlen2++;
	}
	strlenTotal = strlen1 + strlen2;
	string = malloc(sizeof(char) * (strlenTotal + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen1;)
	{
		string[i] = s1[i];
		i++;
	}
	for (i = strlen1; i < strlenTotal;)
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}
