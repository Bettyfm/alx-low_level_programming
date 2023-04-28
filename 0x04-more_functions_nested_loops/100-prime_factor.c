#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	long int n;
	long int m;
	long int l;

	n = 612852475143;
	m = -1;

	while (n % 2 == 0)
	{
		m = 2;
		n /= 2;
	}

	for (l = 3; l <= sqrt(n); l = l + 2)
	{
		while (n % l == 0)
		{
			m = l;
			n = n / l;
		}
	}
	if (n > 2)
		m = n;
	printf("%ld\n", m);
	return (0);
}
