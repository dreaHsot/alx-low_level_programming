#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to whose last digit is to be printed
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (n % 10) * -1;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
