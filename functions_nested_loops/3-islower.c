#include "main.h"

/**
 *  _islower - checks for alphabetic character
 * @c: char passed as argument
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
    else
    return (0);
}
