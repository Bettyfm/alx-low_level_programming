#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vecto
 * Return: 0 if success 1 if Error
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
			if (isdigit(atoi(argv[i])) != 0)
			{
				add = add + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
	}
	return (0);
}
