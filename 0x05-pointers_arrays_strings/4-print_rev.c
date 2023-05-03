#include "main.h"

/**
 * print_rev - prints string in rev
 * @s: string
 * no return
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
