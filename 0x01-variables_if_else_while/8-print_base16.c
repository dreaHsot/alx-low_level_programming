#include <stdio.h>
/**
 * main - Entry point
 * Description - to print hexadecimals
 * Return: Always 0
 */

int main(void)
{
	char h = 'a';
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		d++;
		}
	while (h < 'g')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
