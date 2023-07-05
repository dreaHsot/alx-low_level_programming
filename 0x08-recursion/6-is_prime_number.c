#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 * Return: 1 if @n is prime and 0 otherwise.
 */

int is_prime_number(int n)
{
	int prime_number(int div, int n);

	int div = 2;

	if (n < 2)
		return (0);
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(div, n) != 0)
			return (1);
		else
			return (0);
	}
}

/**
 * prime_number - helper function for is_prime_number
 * @n: number to be checked if prime
 * @div: incrementing divisor
 * Return: 0 if n is not prime, 1 if prime
 */

int prime_number(int div, int n)
{
	if (div < n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			div++;
			return (prime_number(div, n));
		}
	}
	else
	{
		return (1);
	}
}
