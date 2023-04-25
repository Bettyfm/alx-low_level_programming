#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	while (n <= 99)
	{
		n = m;
		while (m <= 99)
		{
			if (n != m)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((n / 10) + 48);

				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++
	}
	putchar('\n');
	return (0);
}
