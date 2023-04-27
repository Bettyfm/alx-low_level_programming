#include "main.h"
/**
 * more_numbers - function that prints 10 lines of 14
 *
 * void function no return
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
		}
		_putchar('\n');
	}
}
