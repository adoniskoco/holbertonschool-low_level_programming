#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to be duplicated.
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available.
 */

char *_strdup(char *str)
{
	int size;
	int i;
	char *copy;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	size = i + 1;

	copy = malloc(size * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}

	return (copy);

}
