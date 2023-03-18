#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimun value of element iin the array
 * @max: the maximun value of element in the array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p; int i;

	if (min == max)
	{
		return (NULL);
	}

	p = (int *)malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
			p[i] = min + i;
	}
	return (p);
}
