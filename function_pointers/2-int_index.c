#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - checks for index to return
* @array: array of numbers
* @size: size of the array
* @cmp: pointer to the respective function
* Return: i
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
