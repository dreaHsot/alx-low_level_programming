#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the character \ should be printed
  */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= 0; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
