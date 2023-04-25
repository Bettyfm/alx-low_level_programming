#include "main.h"
/**
 * print_sign - print the sign of an int
 * @n: interger to be signed
 *
 * Return: 1 for greater than zero -1 for less than zero and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
}
