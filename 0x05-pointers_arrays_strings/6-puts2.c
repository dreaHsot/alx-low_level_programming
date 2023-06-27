#include "main.h"

/**
  * puts2 - prints every other character of a string, from the first character
  * @str: input string to be printed
  *
  */

void puts2(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
		l++;

	for (i = 0; i <= l - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
