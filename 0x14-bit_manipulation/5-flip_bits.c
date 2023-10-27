#include "main.h"

/**
 * flip_bits - number of bits needed to be fliped
 * @n: first int
 * @m: second int
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l;
	unsigned int num;

	l = n ^ m;

	while (l)
	{
		if (l & 1UL)
			num++;
		l = l >> 1;
	}

	return (num);

}
