#include "main.h"

/**
 * _strcpy -entry point,copys two strings
 * @dest: -points to value for input
 * @src: -points to value for input
 * Return: ptr
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
