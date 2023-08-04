#include "main.h"

/**
 * set_bit - sets the value of a bit at given index to 1
 * @n: pointer to the number to set bit to 1
 * @index: index to set bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ext = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = (*n | ext);

	return (1);
}
