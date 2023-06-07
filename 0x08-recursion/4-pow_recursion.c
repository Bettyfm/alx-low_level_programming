#include "main.h"

/**
 * _pow_recursion - power using rec
 * @x: int
 * @y: int power
 * Return: return pow on success and -1 on fail
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));

}
