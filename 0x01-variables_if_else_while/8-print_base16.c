#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;
	int n;

	for (n = '0'; n  <= '9'; n++)
		{ putchar(n);
		}
	for (c = 'a'; c <= 'f'; c++)
		{ putchar(c);
		}
	putchar('\n');
	return (0);
}
