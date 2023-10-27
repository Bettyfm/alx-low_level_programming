#include "main.h"

/**
 * set_bit - Sets the value of a specific bit
 * @n: ptr to int
 * @index: The index of the bi
 *
 * Return: 1 if successful, or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
