#include "main.h"

/**
  * _strncat - concatenates two strings with n bytes
  * @dest: destination string
  * @src: source string to be added to the destination string
  * @n: number of bytes from src
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
