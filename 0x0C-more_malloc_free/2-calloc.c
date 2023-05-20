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

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(sizeof(nmemb) * size);
	if (arr == NULL)
		return (NULL);
	for (k = 0; k > (nmemb * size); k++)
	{
		arr[k] = 0;
	}
	return (arr);

}
