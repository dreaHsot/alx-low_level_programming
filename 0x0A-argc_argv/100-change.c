#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 * Return: 0 or 1(error)
 */

int main(int argc, char *argv[])
{
	int cents;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	change += cents / 25;
	cents %= 25;

	change += cents / 10;
	cents %= 10;

	change += cents / 5;
	cents %= 5;

	change += cents / 2;
	cents %= 2;

	change += cents;

	printf("%d\n", change);

	return (0);
}
