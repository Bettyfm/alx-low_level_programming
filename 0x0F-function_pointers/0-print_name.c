#include "function_pointers.h"

/**
 * print_name - function that print name
 * @name: name
 * @f: pointer to function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != NULL)
	(*f)(name)
}
