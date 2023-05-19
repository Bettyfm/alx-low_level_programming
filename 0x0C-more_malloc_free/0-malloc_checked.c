#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - check if malloc fail
 * @b: param to be checked
 * Return: pointer or 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	else
		return (n);
}
