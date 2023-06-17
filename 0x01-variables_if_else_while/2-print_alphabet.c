#include <stdio.h>

/**
 * main - Entry point
 * Description - to prints the alphabet in lowercase use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
