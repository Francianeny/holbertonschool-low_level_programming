#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c);
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(a) * size);

	if (size == NULL)
		return (NULL);
	for (i = 0; i < size; i++);
	{
		a(i) = c;
	}
	return (a);
}
