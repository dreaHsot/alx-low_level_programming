#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of a integer square matrix
 * @a: input matrix of integers
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
