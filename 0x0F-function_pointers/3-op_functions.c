#include <stdio.h>
#include "calc.h"

/**
 * op_add - func that adds two int
 * @a: first int
 * @b: sec int to add
 * Return: sum of two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fun that substract int from int
 * @a: first int
 * @b: sec int
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - func calc mult of two int
 * @a: first int
 * @b: second int
 * Return: result of multiplication of two int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fun calc devision of two int
 * @a: first int
 * @b: second int
 * Return: resulut of devision a over b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - func to calc mod of two int
 * @a: first int
 * @b: second in
 * Return: rest of the devision a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
