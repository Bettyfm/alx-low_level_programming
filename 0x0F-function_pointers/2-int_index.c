#include "function_pointers.h"

/**
 * int_index - function that search for int
 * @array: ptr to array
 * @size: size of the array
 * @cmp: pointer to function that compares
 * Return: 0 if success (-1) fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array != NULL) && (size != 0) && (cmp != NULL))
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);


}
