#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabet 10 times
 *
 * parameter: void function no parameter
 *
 * Return: void function no return
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
