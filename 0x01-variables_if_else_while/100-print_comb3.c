#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
		if ((m != n) & (n < m))
		{
			putchar(n);
			putchar(m);
			while (n < 9)
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
