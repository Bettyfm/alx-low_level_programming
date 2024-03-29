#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - bin to int
 * @b: char bin
 * Return: 0 fail and num on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		num = 2 * num + (*b - '0');
		b++;
	}
	return (num);
}
