#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function add node
 * @head: new head of the node
 * @n: data
 * Return: ptr to node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Newhead = malloc(sizeof(listint_t));

	if (Newhead == NULL)
		return (NULL);
	Newhead->n = n;
	Newhead->next = *head;
	*head = Newhead;

	return (*head);

}
