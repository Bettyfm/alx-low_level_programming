#include "main.h"
/**
 * _strlen_recursion - lenght of string using recursion
 * @s: string
 * Return: nb lenght using recursion
 */
int _strlen_recursion(char *s)
{
	int nb;

	nb = 0;

	if (*s > '\0')
	{
		nb = nb + _strlen_recursion(s - 1);

	}
	return (nb);
}
