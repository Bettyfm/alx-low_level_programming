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
	size_t i = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
		}
	}
	return (i);
}
