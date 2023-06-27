#include "main.h"
/**
  *  _strcpy - copies string
  * @dest: where we copy the string
  * @src: string to be copied
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
