#include "main.h"

/**
 * print_binary - func print binary
 * @n: int
 * no return
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 0;

	for (m = 1 << 31; m > 0; m = m / 2)
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
}
