#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sum
 * @n : number of args to be summed
 * @...: parameters
 * Return: sum on success and 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int j;
	int sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
	va_start(add, n);

		for (j = 0; j < n; j++)
			sum = sum + va_arg(add, int);
	va_end(add);
	return (sum);

	}
}
