#include "lists.h"

/**
 * sum_dlistint -sums up all data in dlinkedlist
 * @head: -points to the first node
 * Return: (sum)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
