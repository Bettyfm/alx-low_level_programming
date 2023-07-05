#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - func to insert node
 * @head: dbl ptr to head
 * @idx: index
 * @n: data
 * Return: ptr to node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *currnode;
	listint_t *instnode;

	if (!head)
		return (NULL);

	instnode = malloc(sizeof(listint_t));

	if (!instnode)
		return (NULL);

	instnode->n = n;
	instnode->next = NULL;

	if (idx == 0)
	{
		instnode->next = *head;
		*head = instnode;
		return (instnode);
	}

	currnode = *head;
	for (i = 0; currnode && i < idx - 1; i++)
	{
		currnode = currnode->next;
	}

	if (!currnode)
		return (NULL);
	instnode->next = currnode->next;
	currnode->next = instnode;
	return (instnode);
}
