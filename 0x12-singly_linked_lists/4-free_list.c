#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list of nodes
 * @head: ptr to head node
 * no return void
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *node;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		node = temp->next;
		free(temp->str);
		free(temp);
		temp = node;
	}
}
