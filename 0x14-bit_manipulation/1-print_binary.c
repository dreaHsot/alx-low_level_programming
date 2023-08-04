#include "main.h"

/**
 * print_binary - prints number in binary
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int ext = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int a = 0;

	while (ext)
	{
		if (n & ext)
			_putchar('1');
		else if (a)
			_putchar('0');

		a = (n & ext) || a;
		ext >>= 1;
	}
	if (!a)
		_putchar('0');
}
