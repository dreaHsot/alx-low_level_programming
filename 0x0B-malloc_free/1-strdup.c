#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string using malloc
 * @str: string to be duplicated
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int n;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = (char *)malloc((i + 1) * sizeof(*dup));

	if (dup == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		dup[n] = str[n];
	dup[n] = '\0';

	return (dup);
}
