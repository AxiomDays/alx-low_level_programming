#include<stdio.h>
#include "main.h"
#include<stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i;
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

	strlenTotal = strlen1 + strlen2 + 1;
	
	string = malloc(sizeof(char) * strlenTotal);
	if (string == NULL)
	{
		return (NULL);
	}	

	for (i = 0; i < strlen1; i++)
	{
		string[i] = s1[i];
	}
	for (i = strlen1; i < strlenTotal; i++)
	{
		string[i] = s2[i];
	}
	string[i] = '\0';
	return (string);

}
