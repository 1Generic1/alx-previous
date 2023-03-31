#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	return (n);
}
