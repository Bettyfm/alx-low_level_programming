#include "main.h"
/**
 * print_number - prints integer
 * @n: integer to be printed
 * void no return
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if ((m / 10) > 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
