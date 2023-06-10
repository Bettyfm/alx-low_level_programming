#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initialize var of struct dog
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
