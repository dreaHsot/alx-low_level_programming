#include <stdio.h>

/**
 * main - entry point
 * Description - to print single digints
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
