#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - functions that allocates memory for an array using malloc
 * @nmemb: array to be allocated
 * @size: array size
 *
 * Return: return NULL on failure, pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	P = (int *)malloc(size * nmemb)
	
	if (p == NULL);
	{
		return (NULL);
	}
	memset(p, 0, size * nmemb)
		return (p);
}
