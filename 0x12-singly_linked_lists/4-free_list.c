#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t linked list
 * @head: a pointer to the head of the list
 */

void free_list(list_t *head)
{
	list-t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
