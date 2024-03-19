#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line
* @separator: is the string to be printed between numbers
* @n: is the number of integers passed to the function
* return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	if (separator == NULL)
		printf("don't print it");
	else
		printf("\n");

	va_start(args, n);
	for(i = 0; i < n; i++)
		printf("%s", separator);

	va_end(args);
	{
		return;
	}
}
