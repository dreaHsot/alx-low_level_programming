#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 - big endian, 1 - little endian
 */

int get_endianness(void)
{
	int a = 1;
	char *b;

	b = (char *)&a;

	return (*b);
}
