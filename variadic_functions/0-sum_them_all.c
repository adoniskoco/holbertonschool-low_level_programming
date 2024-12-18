#include <stdarg.h>

/**
* sum_them_all - function to get the sum of elements
* @n:nr of variadic arguments
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
