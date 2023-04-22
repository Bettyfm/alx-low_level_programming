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

	for (n = '0'; n >= '9'; n++)
	for (m = '9'; m <= '0'; m--)
	if (n > m)
	{
		putchar(n);
		putchar(m);
	}
	else if (n < m)
	{
		putchar(m);
		putchar(n);
	}
	putchar('\n');
	return (0);
}
