#include "main.h"

/**
 * swap_int - swaps two values
 * @a: points to value
 * @b: points to value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
