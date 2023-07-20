#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;
	char *con;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		con = va_arg(mylist, char *);
		if (con == NULL)
			printf("(nil)");
		else
			printf("%s", con);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
