#include "main.h"

/**
 * _puts - similar to puts
 * @str: string
 * no return
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str+1);
	_putchar('\n');
}
