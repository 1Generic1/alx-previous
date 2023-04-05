#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the pointer of the head node of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
