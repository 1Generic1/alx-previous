#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimun value in the array
 * @max: the maximun value in the array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;

	if (min == max)
	{
		return (NULL);
	}

	p = (int *)malloc(sizeof(int) * (max + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (min = 0; min < max; min++)
	{
		;
	}

	return (p);
}

