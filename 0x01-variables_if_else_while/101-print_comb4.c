#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0(success)
 */

int main(void)
{
	int n;
	int m;
	int l;

	for (n = '0'; n <= '7'; n++)
	{
		for (m = '1'; m <= '8'; m++)
		{
			for (l = '2'; l <= '9'; l++)
			{
			if ((m != n) & (m != l) & (l != n) & (n < m) & (m < l))
			{
			putchar(n);
			putchar(m);
			putchar(l);
			}
			if ((n * m * l) < '7' * '8' * '9')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
