#include <stdarg.h>

/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * Return: total summation
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int answer = 0;

	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		answer += va_arg(numbers, int);
	}
	return (answer);
}
