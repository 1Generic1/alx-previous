#include "lists.h"
#include <stddef.h>

/**
 * free_listint2 - functions that frees a listint_t list.
 * @head: pointer to a pointer of the head of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
