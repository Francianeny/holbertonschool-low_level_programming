#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*_add_dnodeint - a function that adds a new node at the beginning of a dlistint_t list.
*@n: integer
*@head: a pointer to point to the first element at lists
*Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
