#include "main.h"

/**
 * _atoi - converts string to integer.
 * @s: inputed string to be converted
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int si = 1;
	int c = 0;
	int i = 0;

	if (s[0] == '-' || s[0] == '+')
	{
		if (s[0] == '-')
			si = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			c = c * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}

	return (c * si);
}
