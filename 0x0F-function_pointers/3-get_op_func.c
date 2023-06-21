#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - func that returns ptr to op
 * @s: string operator
 * Return: func ptr to the opration
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	 };
	int i;

	i = 0;

	while (i < 5)
	{
		if ((s != NULL) && (s[0] == ops[i].op[0]) && (s[1] == 0))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
