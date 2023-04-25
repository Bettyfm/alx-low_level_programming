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
		if (n < m && m < l)
		{
			{
			putchar(n);
			putchar(m);
			putchar(l);
			}
			if (n == '7' && m == '8' && l == '9')
			{
				break;
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
