#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < (n - 1); i++)
	{
		if (separator != NULL)
		printf("%d%s", va_arg(numbers, int), separator);
	}
	printf("%d\n", va_arg(numbers, int));
}
