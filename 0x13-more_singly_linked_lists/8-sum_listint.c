#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - func that sum
 * @head: first node
 * Return: sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
