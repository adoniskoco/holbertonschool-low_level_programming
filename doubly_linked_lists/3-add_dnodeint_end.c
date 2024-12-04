#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end -adds new nod at the end
 * @head: -points to the respective structure
 * @n: -holds value for output
 * Return: (new)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *helper = *head;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (helper->next != NULL)
		{
			helper = helper->next;
		}

		helper->next = new_node;
		new_node->prev = helper;
	}
	return (new_node);

}
