#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds node
 * @head: double ptr to head
 * @n: int value
 * Return: ptr to struct or NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newtail = malloc(sizeof(listint_t));
	listint_t *loopnode = malloc(sizeof(listint_t));

	if (newtail == NULL)
	return (NULL);

	newtail->n = n;
	newtail->next = NULL;

	if (*head == NULL)
		*head = newtail;
	else
	{
		loopnode = *head;
		while (loopnode->next)
			loopnode = loopnode->next;
		loopnode->next = newtail;
	}
	return (newtail);

}
