#include "main.h"
/**
 * times_table - print time table
 *
 * no return
 */
void times_table(void)
{
	int n;
	int m;
	int l;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			l = n * m;
			if (m == 0)
			{
				_putchar(l + '0');
			}
			if (l < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			}
			else if (l >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
	       _putchar('\n');
	}
}

