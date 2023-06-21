#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  *
  */

void print_alphabet_x10(void)
{
	char alphabets;
	int n;

	for (n = 0; n < 10; n++)
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		{
			_putchar('\n');
		}
}
