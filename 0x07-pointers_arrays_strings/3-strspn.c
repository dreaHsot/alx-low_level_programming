#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be counted
 * @accept: substring to be counted for
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (match == 0)
		{
			return (count);
		}

		count++;
	}

	return (count);
}
