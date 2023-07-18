#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - Entry point
 *
 * Description: 'the program's descriptor'
 * @name: char *name
 * @age: float age
 * @owner: char *owner
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelen, ownerlen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (namelen = 0; name[namelen]; namelen++)
		;
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
	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;
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
