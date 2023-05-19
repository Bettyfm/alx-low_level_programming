#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - check if malloc fail
 * @b: param to be checked
 * Return: pointer or 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
