#include "main.h"

/**
  * rev_string - reverses a string
  * @s: input string to be reverse
  *
  */

void rev_string(char *s)
{
	int l = 0;
	int i, j;
	char r;

	while (s[l] != '\0')
		l++;

	for (i = l - 1, j = 0; i > j; i--, j++)
	{
		r = s[i];
		s[i] = s[j];
		s[j] = r;
	}
}
