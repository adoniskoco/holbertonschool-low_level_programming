#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_length - Calculates the length of a string manually.
 * @str: The string whose length to calculate.
 *
 * Return: The length of the string.
 */

unsigned int string_length(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = string_length(dup_str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	}
	return (new_node);
}
