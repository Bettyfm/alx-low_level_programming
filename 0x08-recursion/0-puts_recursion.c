#include "main.h"

/**
 * _puts_recursion - function that prints puts
 * @s: string
 * void funbction no return
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
