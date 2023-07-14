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
	int i = 0;
	int j = 0;
	int k;
	int num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (num >= j)
		num = j;

	s = malloc((i + num + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (j = 0; j < num; j++)
		s[k++] = s2[j];

	s[k] = '\0';

	return (s);
}
