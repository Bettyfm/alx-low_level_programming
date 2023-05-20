#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocate memory of an array
 * @nmemb: elements of array
 * @size: size of element of array
 * Return: pointer or NULL if zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int k;
	unsigned int l;

	l = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(l);
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < l; k++)
	{
		arr[k] = 0;
	}
	return (arr);

}
