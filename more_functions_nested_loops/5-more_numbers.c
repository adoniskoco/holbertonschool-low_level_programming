#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 *
 */
void more_numbers(void)
{
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('0' + a / 10);
			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}
