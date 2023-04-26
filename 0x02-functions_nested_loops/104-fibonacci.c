#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int n, fib1 = 1, fib2 = 2, max = 1000000000;
	unsigned long int fib1p, fib1d, fib2p, fib2d;

	printf("%lu", fib1);
	for (n = 1; n < 91; n++)
	{
		printf(", %lu", fib2);
		fib2 = fib1 + fib2;
		fib1 = fib2 - fib1;
	}
	fib1p = fib1 / max;
	fib1d = fib1 % max;
	fib2p = fib2 / max;
	fib2d = fib2 % max;

	for (n = 92; n < 99; n++)
	{
		printf(", %lu", fib2p + (fib2d / max));
		printf("%lu", fib2d % max);
		fib2p = fib2p + fib1p;
		fib1p = fib2p - fib1p;
		fib2d = fib2d + fib1d;
		fib1d = fib2d - fib1d;
	}
	printf("\n");
	return (0);
}
