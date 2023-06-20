#include "main.h"

/**
  * main - entry point
  *
  * description - prints alphabets in lowercase
  *
  * Return: 0
  */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	return (0);
}
