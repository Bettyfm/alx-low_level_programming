#include "main.h"
/**
 * print_last_digit - function to print last digit
 *
 * @m: integer with digits
 *
 * Return: last digit
 */
int print_last_digit(int m)
{
	int n;

	if (m < 0)
		m = -m;
	n = m % 10;
	if (n < 0)
		n = -n
		_putchar(n);
	return (n);
}
