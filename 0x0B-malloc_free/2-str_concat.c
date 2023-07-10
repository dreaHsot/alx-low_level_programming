#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	int i = 0, j = 0, k = 0, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s1s2 = (char *)malloc((i + j + 1) * sizeof(*s1s2));

	if (s1s2 == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s1s2[k] = s1[k];

	for (n = 0; n < j; n++)
		s1s2[k++] = s2[n];

	s1s2[k] = '\0';

	return (s1s2);
}
