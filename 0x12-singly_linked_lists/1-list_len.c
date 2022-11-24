#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - adds a new node at the beginning of a list_t list.
 * @h: The list_t list
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

