#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _list_len - a function that returns the number of elements in a linked list_t list.
 * @h: a pointer to a constant list_t structure.
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
