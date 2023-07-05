#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - fun
 * @head: first node
 * @index: index
 *
 * Return: 1 success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currnode;
	listint_t *oldnode;
	unsigned int idx;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		currnode = *head;
		*head = (*head)->next;
		free(currnode);
		return (1);
	}

	oldnode = *head;
	for (idx = 0; oldnode && idx < index - 1; idx++)
	{
		oldnode = oldnode->next;
	}

	if (oldnode && oldnode->next)
	{
		currnode = oldnode->next;
		oldnode->next = currnode->next;
		free(currnode);
		return (1);
	}
	return (-1);
}
