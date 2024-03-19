#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - a function that prints strings, followed by a new line
* @separator: is the string to be printed between numbers
* @n: is the number of integers passed to the function
* return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
