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
	int n = 0;

	for (l = 0 ; str[i] != '\0'; l++)
		;
	l++;
	for (n /= 2; str[i] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');


}
