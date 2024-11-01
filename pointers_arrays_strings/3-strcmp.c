#include "main.h"

/**
* _strcmp - compares two strings
* @s1: points to string
* @s2: points to string
* Return: difference
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (difference);
}
