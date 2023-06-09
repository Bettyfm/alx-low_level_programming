#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that print name
 * @name: name
 * @f: pointer to function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		(*f)(name);
}
