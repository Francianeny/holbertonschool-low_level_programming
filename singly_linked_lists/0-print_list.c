#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to a constant list_t structure.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
