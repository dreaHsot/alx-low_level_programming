#include <stdio.h>

/**
 * main - entry point
 * description - to combine two numbers without repeatition
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
		for (b = a + 1; b < 10; b++)
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');

	return (0);
}
