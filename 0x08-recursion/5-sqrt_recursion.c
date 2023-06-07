#include "main.h"
int square_helper(int n, int m);
/**
 * _sqrt_recursion - function that cal sqrt of n
 * @n: int to be calc
 * Return: val on success and -1 on fail
 */
int _sqrt_recursion(int n)
{
	return (square_helper(n, 1));
}
/**
 * square_helper - recursion to cal sqrt
 * @n: int to find sqrt
 * @m: itiration to find sqrt
 * Return: value success -1 fail
 */
int square_helper(int n, int m)
{
	if ((m * m) == n)
		return (m);
	else if ((m * m) < n)
		return (square_helper(n, m + 1));
	else
		return (-1);
}
