#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of binary number
 * Return: coverted value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		dec <<= 1;
		dec += (b[i] - '0');
	}
	return (dec);
}
