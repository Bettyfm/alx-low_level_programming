#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long  n = 1, m = 2, l;

	for (i = 0; i < 50; i++)
	{
		printf("%lu", n);
		l = n + m;
		n = m;
		m = l;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
