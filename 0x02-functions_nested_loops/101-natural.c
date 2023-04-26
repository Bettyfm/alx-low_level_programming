#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			m += n;
	}
	printf("%d\n", m);
	return (0);
}
