#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings.
 * @separator: A string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *s;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(args, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
