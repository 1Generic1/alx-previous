#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the 
 * nth node of a listint_t linked list
 * @head: the head node of the list
 * @index: the index of the node to be returned
 *
 * Return: the nth node or NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; node != NULL && i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
