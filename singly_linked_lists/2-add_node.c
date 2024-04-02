#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a pointer to point to the first element at lists
 * @str: a string needs to be duplicated
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t count;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	n->len = count;
	n->next = *head;
	*head = n;

	return (*head);
}
