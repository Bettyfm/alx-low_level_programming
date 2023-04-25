#include "main.h"
/**
 * _isalpha - function to determine upper or lower case
 *
 * @c: parameter to evaluate
 *
 * Return: 1 if c is upper or lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a') & (c <= 'z') & (c >= 'A') & (c <= 'Z'))
		return (1);
	else
		return (0);
}
