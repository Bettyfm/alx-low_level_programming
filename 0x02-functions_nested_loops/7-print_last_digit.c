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

	n = m % 10;

	if (m < 0)
	return (-n);
	else
	return (n);
}
