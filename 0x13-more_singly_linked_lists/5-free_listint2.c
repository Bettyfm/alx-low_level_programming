#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free ls set h to null
 * @head: head of linked list
 * no return
 */
void free_listint2(listint_t **head)
{
	listint_t *currnode;
	listint_t *placehold;

	if (!head)
		return;
	currnode = *head;
	while (currnode)
	{
		placehold = currnode;
		currnode = currnode->next;
		free(placehold);
	}
	*head = NULL;
}
