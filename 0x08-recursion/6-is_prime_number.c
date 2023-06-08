#include "main.h"
/**
 * is_prime_number - function to check for prime
 * @n: int to be checked
 * Return: 0 success 1 on fail
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (_prime_check(n, n - 1));
}
/**
 * _prime_check - function to check for prime
 * @n: int to be checked
 * @m: evaluated int
 * Return: 0 on success and 1 on fail
 */
int _prime_check(int n, int m)
{
	if (m == 1)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (_prime_check(n, m - 1));
}
