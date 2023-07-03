#include "main.h"

/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @n: number of bytes to be copied
  * @src: source memory to copy from
  * @dest: destination memory to copy into
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
