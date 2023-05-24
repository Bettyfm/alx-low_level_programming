#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that print dog inf
 * @d: ptr to structur dog
 * Return: no retun void func
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
