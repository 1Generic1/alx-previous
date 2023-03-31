#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the lsit
 * @str: the string to be added to the list.
 *
 * Return: the address of the new element or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head || !str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	}
	return new_node;
}

