#include "lists.h"
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the head of list_t list
 * @str: string to be duplicated
 *
 * Return:  the address of the new element, or NULL if it failed.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last_node;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	len = strlen(dup);

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last_node =  *head;
		while (last_node->next != NULL)
		{

			last_node = last_node->next;
		}
		last_node->next = new;
	}

	return (*head);
}
