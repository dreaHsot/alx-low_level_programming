#include <stdio.h>

/**
  * main - entry point
  * description - to print the sum of multiples of 3 or 5 below 1024
  * Return: 0
  */
int main(void)
{
	int sum = 0;
	int x;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);

	return (0);
}
