#include "main.h"

/**
 * factorial - prints factorial of n
 * @n: int to get fac
 * Return: fac of n success -1 fail
 */
int factorial(int n)
{
	if (n < 0)
		return (-1)
	else if (n == 0)
		return (1)
	else
		return (n * factorial(n - 1))

}
