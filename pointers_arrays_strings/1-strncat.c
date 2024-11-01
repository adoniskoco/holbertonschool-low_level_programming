#include "main.h"

/**
* _strncat - concatenates n bytes
* @dest: points to string
* @src: points to source
* @n: nr of bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
