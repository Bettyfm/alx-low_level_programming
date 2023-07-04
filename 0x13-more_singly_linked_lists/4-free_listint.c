#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - func to free
 * @head: struct
 * no return
 */
void free_listint(listint_t *head)
{
	listint_t *currhead;

	while (head)
	{
		currhead = head;
		head = head->next;
		free(currhead);
	}
}
