#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* print_strings - function to print strings
* @separator: string to separate strings
* @n: number of elements to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");

}
