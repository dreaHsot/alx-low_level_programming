#include <stdio.h>
/**
 * main - Entry point
 * Description -  prints lowercase without q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
