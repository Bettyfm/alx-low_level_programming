#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: count argument
 * @argv: argument vector
 * Return: 0 if success non zero fail
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
