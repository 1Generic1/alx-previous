#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the old string
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of the string
 *
 * Return: pointer to the new string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
	if (new_size > old_size)
	{
		memcpy(p, ptr, old_size);
	}
	else
	{
		memcpy(p, ptr, new_size);
	}
	free(ptr);
		return (p);
}
