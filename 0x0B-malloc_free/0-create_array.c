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

	if (size != 0)
	{
		ar = malloc(sizeof(c) * size);
	}
	else
	{
		_putchar('N');
		_putchar('U');
		_putchar('L');
		_putchar('L');
		_putchar('\n');
	}
	return (0);
}
