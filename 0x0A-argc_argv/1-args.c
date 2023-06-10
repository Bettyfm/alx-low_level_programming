#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
