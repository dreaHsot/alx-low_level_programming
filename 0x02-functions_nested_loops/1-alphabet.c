#include "main.h"

/**
  * print_alphabet - Print alphabets in lowercase using _putchar
  *
  * description - prints alphabets in lowercase
  *
  * Return: 0
  */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
