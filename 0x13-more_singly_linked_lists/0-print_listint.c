#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints lists
 * @h: node to be printed
 * Return: sum of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
