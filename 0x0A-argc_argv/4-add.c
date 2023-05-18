#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vecto
 * Return: 0 if success 1 if Error
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned long int j;
	int add = 0;
	char *a;

	if (argc == 0)
		printf("0\n");
	else
	{
	for (i = 0; i < argc; i++)
	{
		a = argv[i];

		for (j = 0; j < strlen(a); j++)
			if (a[j] < '0' || a[j] > '9')
			{
				return (printf("Error\n"), 1);
			}
		add = add + atoi(a);
		a++;
	}
	printf("%d\n", add);
	}
	return (0);
}
