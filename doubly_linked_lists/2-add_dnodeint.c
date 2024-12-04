#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint -add a new node
 * @head: -points to the respective structure
 * @n: -holds value for output
 * Return: (new)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
