#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a node
 * @head: ptr to first node
 * @str: string to be copied
 * Return: struct node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (*str)
		len++;
	if (NewNode == NULL)
		return (NULL);
	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = *head;
	*head = NewNode;

	return (*head);



}
