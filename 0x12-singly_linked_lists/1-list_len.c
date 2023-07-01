#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - list of ele
 * @h: struct node
 * Return: list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);

}
