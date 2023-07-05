#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that del head node
 * @head: node
 * Return: data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *currnode;
	int data;

	if (!head || !*head)
		return (0);
	currnode = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = currnode;
	return (data);
}
