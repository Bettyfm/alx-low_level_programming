#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free alloc mem
 * @d: ptr to struct
 * Return: noreturn
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
