#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a function that excute a parameter for elemnt of array
 * @array: ptr to array
 * @size: size of array
 * @action: ptr to function
 * void func no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i = 0;

	if ((array != NULL) && (action != NULL))
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
