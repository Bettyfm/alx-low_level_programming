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
	listint_t *next;

	while (head)
	{
		currnode = *head;
		next = currnode->next;
		free(currnode);
		currnode = next;
	}
	*head = NULL;
}
