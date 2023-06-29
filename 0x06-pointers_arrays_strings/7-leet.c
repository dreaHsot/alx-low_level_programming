#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: string to be encoded
 * Return: a
 */

char *leet(char *a)
{
	int i = 0;
	int j;
	char *b = "AaEeOoTtLl";
	char *c = "4433007711";

	while (a[i])
	{
		j = 0;
		while (b[j])
		{
			if (a[i] == b[j] || a[i] == b[j])
			{
				a[i] = c[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (a);
}
