#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelen, ownerlen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (namelen = 0; name[namelen] != '\0'; namelen++)
		namelen++;
	dog->name = malloc(namelen * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
		ownerlen++;
	dog->owner = malloc(ownerlen * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < ownerlen; ownerlen++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);

}
