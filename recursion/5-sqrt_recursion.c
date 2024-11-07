#include "main.h"
/**
 * _sqrt_primaryf - primary recursive function
 * @n: number to check
 * @r: the root number
 * Return: r
 */

int _sqrt_primaryf(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (_sqrt_primaryf(n, r + 1));
}

/**
 * _sqrt_recursion - calling function
 * @n: number to check
 * Return: r
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_primaryf(n, 0));
}
