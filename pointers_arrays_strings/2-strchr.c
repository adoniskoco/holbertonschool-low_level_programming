#include "main.h"
#include <stddef.h>

/**
* _strchr- checks for chars
* @s: points to the string
* @c: char to check
* Return: (s + i)
*/

char *_strchr(char *s, char c)
{
	 unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
