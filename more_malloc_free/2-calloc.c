#include "main.h"
#include <stdlib.h>

/**
* *_calloc - func to simulate calloc
* @nmemb: size of the array
* @size: size per element
* Return: ptr
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);

}
