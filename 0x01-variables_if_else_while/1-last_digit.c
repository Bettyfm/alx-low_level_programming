#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:always 0(success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else if ((m < 6) & (m != 0))
		printf("Last digit of %i is %i andand is less than 6 and not 0", n, m);
	return (0);
}
