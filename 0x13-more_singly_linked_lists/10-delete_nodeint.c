#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  function that deletes the node at index 
 * index of a listint_t linked list.
 * @head: pointer to the pointer of the head node
 * @index: index of the node that should be deleted (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
	}
	free (current);
	return (1);
}
