#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: the integer to be checked
 * Return: 1 if postive; -1 if negative and 0 if it is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
