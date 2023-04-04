#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: pointer to the pointer of the head node of the list
 * @idx: the index of the list where the node should be added
 * @n:
 *
 * Return: return NULL if failed or return the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return(new_node);
	}
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
	i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL); /* index out of range */
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}

