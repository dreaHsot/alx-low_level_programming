#include "main.h"

/**
 * print_line - function draws a straight line
 * @n: number of times for _ to be printed
 *
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
