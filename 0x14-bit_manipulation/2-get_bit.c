#include "main.h"


/**
 * get_bit - func to get bit
 * @n: int
 * @index: index
 * Return: bit value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

