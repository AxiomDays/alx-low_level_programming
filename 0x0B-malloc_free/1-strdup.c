#include<stdio.h>
#include "main.h"
#include<stdlib.h>

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char*));
	s = str;
	return (s);


}
