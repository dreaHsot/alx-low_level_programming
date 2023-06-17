#include <stdio.h>
/**
 * main - Entry point
 * Description - printing all digit numbers with comma and space
 * Return: Always 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
