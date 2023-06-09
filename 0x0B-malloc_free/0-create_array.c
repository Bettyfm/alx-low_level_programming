#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *create_array - function that creats an array
 * @c: charachter init
 * @size: sizer of array
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(sizeof(c) * size);

	if ((size == 0) || (ar == 0))
		return (NULL);

	else
	{
		while (size--)
			ar[size] = c;
		return (ar);
	}
}
