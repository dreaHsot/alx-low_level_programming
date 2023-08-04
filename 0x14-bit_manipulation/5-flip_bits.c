#include "main.h"

/**
 * flip_bits - returns no. of flips to get from one no. to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		xor &= (xor - 1);
		flips++;
	}

	return (flips);
}
