#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _add_node_end - a function that adds a new node at the end of a list_t list.
 * @str: a string needs to be duplicated
 * @head: a pointer to point to the first element at lists
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *temp;
	size_t count;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	n->len = count;
	n->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = n;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n;
	}

	return (*head);
}
