#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: pointer to the array
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc (b);
	if (p = NULL)
	{
		exit(98);
	}
	return (p);
}
