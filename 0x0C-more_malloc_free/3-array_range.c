#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
