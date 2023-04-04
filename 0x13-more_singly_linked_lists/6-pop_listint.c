#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the pointer to the head node of the list
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
