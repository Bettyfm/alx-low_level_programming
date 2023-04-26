#include "main.h"
/**
 * jack_bauer - function that prints every minutes of 24 hours
 *
 * Return: 0 always (success)
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = '0'; a <= '24'; a++)
		for (b = '0'; b <= '60'; b++)
		{
		i	_putchar(a + '0');
			_putchar(':');
			_putchar(b + '0');
			putchar('\n');
		}
	return (0);
}
