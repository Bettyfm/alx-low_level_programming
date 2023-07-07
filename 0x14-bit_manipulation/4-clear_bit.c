#include "main.h"

/**
 * clear_bit - func to clear bir
 * @n: int to be cleared
 * @index: of bit to be cleared
 * Return: 1 on success -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
