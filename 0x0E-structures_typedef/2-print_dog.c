#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print dog inf
 * @d: ptr to structur dog
 * Return: no retun void func
 */
void print_dog(struct dog *d)
{
	if ((d->name == NULL) || (d->owner == NULL))
		printf("(nil)");
	d = malloc(sizeof(struct dog))
	if (d == NULL)
		;
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);

}
