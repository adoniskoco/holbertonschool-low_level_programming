#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int i;
	int j;
	int number;

	for (i = 0; i <= 9; i++)
	{
		printf("0");
		printf(", ");
		number = 0;
		for (j = 0; j <= 8; j++)
		{
			number += i;

			printf("%d", number);

			if (j != 8)
			{
				printf(", ");
			}
		}
		if (i != 9)
		{
			printf("\n");
		}
	}

}
