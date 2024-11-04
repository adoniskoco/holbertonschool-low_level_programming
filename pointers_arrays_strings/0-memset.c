#include "main.h"

/**
* _memset - fills memory with byte
* @s: points to the memory
* @b: char to put
* @n: number of times to insert the char
* Return: (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
