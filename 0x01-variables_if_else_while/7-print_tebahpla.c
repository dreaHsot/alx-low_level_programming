#include <stdio.h>
/**
 * main - Entry point
 * Description - write lowercase in reverse, rlc
 * Return: Always 0
 */

int main(void)
{
	char rlc = 'z';

	while (rlc >= 'a')
	{
		putchar(rlc);
		rlc--;
	}
	putchar('\n');
	return (0);
}
