#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *s = argv[2];
	int (*fp)(int, int);
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fp = get_op_func(argv[2]);

	if (!fp)
	{
		printf("Error\n");
		exit(99);
	}

	if ((s == '/' || s == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	answer = fp(a, b);
	printf("%d\n", answer);

	return (0);
}
