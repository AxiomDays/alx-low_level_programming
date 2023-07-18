#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Entry point
 *
 * Description: 'the program's descriptor'
 * @d: struct dog d
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
