#include <stdlib.h>
#include"main.h"
/**
 * array_range - sdfsd
 * @min:sdfsdf
 * @max:sdfsd
 * Return:sdfgs
 */

int *array_range(int min, int max)
{
	int *ptr;
	int nr_of_numbers;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	nr_of_numbers = max - min + 1;
	ptr = malloc(nr_of_numbers * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nr_of_numbers; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
