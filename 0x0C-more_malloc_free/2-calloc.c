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
	if (nmemb < 1 || size < 1)
		return (NULL);

	void *a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	memset(a, 0, nmemb * size);

	return (a);
}
