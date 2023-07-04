#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function return numb of nodes
 * @h: ptr to a node
 * Return: numb of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
