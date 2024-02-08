#include "main.h"

/**
 * _pow - calculates base ** p
 * @base: base of the exponent
 * @p: power of the exponent
 *
 * Return: value of base ** p
 */

unsigned long int _pow(unsigned int base, unsigned int p)
{
	unsigned long int num = 1;
	unsigned int i = 0;

	while (i != p)
	{
		num *= base;
		i++;
	}

	return (num);
}

/**
 * print_binary - prints a number, n in binary form
 * @n: number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
