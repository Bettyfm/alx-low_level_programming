#include "main.h"

/**
 * puts_half - function that prints half of string
 * @str: string input
 * void func no return
 */
void puts_half(char *str)
{
	int i = 0;
	int l;
	int n;

	for (l = 0 ;str[i] != '\0'; l++);
		;
	n = (l - 1) / 2;
	for (n ; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');


}
