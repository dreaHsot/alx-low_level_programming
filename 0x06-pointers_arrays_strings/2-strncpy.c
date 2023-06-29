#include "main.h"
/**
  *  _strncpy - copies string
  * @dest: where we copy the string
  * @src: string to be copied
  * @n: number of char to be copied from src
  * Return: the pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
