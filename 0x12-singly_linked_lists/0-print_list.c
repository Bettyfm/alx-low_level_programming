#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that print list
 * @h: truct node
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		if (str == NULL)
			printf("[0] (nil)");
		else
		printf("[%d]%s\n", h.len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
