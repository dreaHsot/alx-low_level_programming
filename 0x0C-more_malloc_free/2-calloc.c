#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}
