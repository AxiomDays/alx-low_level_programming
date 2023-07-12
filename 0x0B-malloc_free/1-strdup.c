#include<stdio.h>
#include "main.h"
#include<stdlib.h>

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
	
	for (i = 0; str[i] != '\0';)
	{
		s[i] = str[i];
		i++;
	}
	return (s);


}
