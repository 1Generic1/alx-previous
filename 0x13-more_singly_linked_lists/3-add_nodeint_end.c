#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: the value of n we want ot add to the end of the list
 *
 * Return: the address of the new element , NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *curr_node = *head;
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new_node;
	}
	return (new_node);
}
