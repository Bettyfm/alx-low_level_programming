#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - func to get node at index
 * @head: first node
 * @index: node number
 * Return: ptr or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	n = 0;
	node = head;
	while ((node != NULL) && (n < index))
	{
		node = node->next;
		n++;
	}
	if (node)
		return (node);
	else
		return (NULL);


}
