#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on list of an array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
