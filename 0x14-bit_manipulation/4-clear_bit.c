#include "main.h"

/**
 * clear_bit - sets the value of a bit at given index to 0
 * @n: pointer to the number to set bit to o
 * @index: index to set bit to 0
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ext = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	ext = ~ext;
	*n = (*n & ext);

	return (1);
}
