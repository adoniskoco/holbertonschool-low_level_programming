#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index -entry point,searches for an int
 * @array: -points to the respective array
 * @size: -holds value for output
 * @cmp: -points to the respective func
 * Return: (i)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
			return (-1);
}
