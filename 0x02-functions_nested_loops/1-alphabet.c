#include"main.h"
/**
 * main - Entry point
 *
 * print_alphabet is a function that doesnt need arguments but print alphabet
 *
 * void function requires no return
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

}
