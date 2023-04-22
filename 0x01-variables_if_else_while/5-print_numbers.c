#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a = a + 1;
	}
		putchar('\n');
		return (0);
}
