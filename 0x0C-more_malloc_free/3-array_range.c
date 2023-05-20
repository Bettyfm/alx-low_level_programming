#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of int
 * @min: minimum integer
 * @max: maximum integer
 * Return: NULL if fail and a pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	arr = malloc(sizeof(int) * length);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < length; i++)
			arr[i] = min++;
		return (arr);
}
