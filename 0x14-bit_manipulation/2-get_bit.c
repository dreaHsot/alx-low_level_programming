#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: number to check bit at index
 * @index: index to check bit
 * Return: value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ext = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	if ((n & ext) == 0)
		return (0);
	else
		return (1);
}
