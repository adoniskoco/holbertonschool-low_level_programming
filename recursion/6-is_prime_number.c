#include "main.h"

/**
* prime_rec - check if number is prime
* @n: number to check
* @i: tester number
* Return: 1 or 0
*/

int prime_rec(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n - 1)
	{
		return (1);
	}
	return (prime_rec(n, i + 1));
}

/**
* is_prime_number - function to test for prime number
* @n: number to check
* Return: 1
*/

int is_prime_number(int n)
{
	return (prime_rec(n, 2));
}
