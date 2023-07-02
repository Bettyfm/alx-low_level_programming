#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - lenght of str
 * @s: str
 * Return: str
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * add_node - function that adds a node
 * @head: ptr to first node
 * @str: string to be copied
 * Return: struct node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode = malloc(sizeof(list_t));

	if ((NewNode == NULL) || head == NULL)
		return (NULL);
	if (str != NULL)

	NewNode->str = strdup(str);
	NewNode->len = _strlen(NewNode->str);
	NewNode->next = *head;
	*head = NewNode;

	return (*head);
}
