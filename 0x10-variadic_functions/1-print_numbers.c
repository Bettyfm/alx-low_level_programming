#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - func to print numb
 * @separator: string that separates
 * @n: number of numbers
 * @...: numb to be printed
 * no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));
		if (j != 0 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
