#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: index when cmp is true or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i])
					return (i);
		}
	}
	return (-1);
}
