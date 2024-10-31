#include "main.h"
/**
*rev_string - reverses a string.
*@s: points to a value
*/
void rev_string(char *s)
{
	int count, start, end, tmp;

	count = 0;
	while (s[count] != '\0')
		count++;

	start = 0;
	end = count - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
