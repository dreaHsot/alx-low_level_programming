#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list anything;
	char *sepa = "";
	char *s;

	va_start(anything, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sepa, va_arg(anything, int));
				break;
			case 'i':
				printf("%s%d", sepa, va_arg(anything, int));
				break;
			case 'f':
				printf("%s%f", sepa, va_arg(anything, double));
				break;
			case 's':
				s = va_arg(anything, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sepa, s);
				break;
			default:
				i++;
				continue;
		}
		sepa = ", ";
		i++;
	}
	printf("\n");
	va_end(anything);
}
