#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Entry point
 *
 * Description: 'the program's descriptor'
 * @d: struct dog d
 * @name: char *name
 * @age: float age
 * @owner: char *owner
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
