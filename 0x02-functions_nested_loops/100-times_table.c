#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of table
 */
void print_times_table(int n)
{
	int n, m, l, k;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (l = 0; l <= n; l++)
			{
				k = l * m;
				if (l == 0)
				{
					_putchar('0' + k);
				}
				else if (k < 10 && l != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (k / 100));
					_putchar('0' + ((k / 10) % 10));
					_putchar('0' + (k % 10));
				}
			}
			_putchar('\n');
		}
	}
}
