#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n char from s2
 * @s1: string 1
 * @s2: string 2
 * @n: no of char from s2 to concatenate
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);

	while (s1[i] != '\0')
		i++;
	while (s1[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	s = (char *)malloc((i + n + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		s[k] = s1[k];

	for (j = 0; j < n; j++, k++)
		s[k] = s2[j];

	s[k] = '\0';

	return (s);
}
