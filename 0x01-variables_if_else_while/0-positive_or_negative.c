#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive ", n);
	else if (n < 0)
		printf("%i is negative ", n);
	else if (n == 0)
		printf("%i is zero", n);
	return (0);
}
