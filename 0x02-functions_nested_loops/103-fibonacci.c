#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long n, m, sum, new;

	n = 1;
	m = 2;
	sum = 0;

	for (i = 0 ; i <= 33 ; i++)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum += n;
		}
		new = n + m;
		n = m;
		m = new;
	}
	printf("%lu\n", sum);
	return (0);
}
