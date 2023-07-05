#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - func that del node
 * @head: ptr to first node
 * @index: numb to delte
 *
 * Return: 1 on success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currnode;
	listint_t *oldnode;
	unsigned int idx;

	idx = 0;
	if (index == 0)
	{
		currnode = *head;
		*head = (*head)->next;
		free(currnode);
		return (1);
	}
	currnode = *head;
	while (currnode)
	{
		if (idx == index)
		{
			oldnode->next = currnode->next;
			free(currnode);
			return (1);
		}
		idx++;
		oldnode = currnode;
		currnode = currnode->next;
	}
	return (-1);

}
