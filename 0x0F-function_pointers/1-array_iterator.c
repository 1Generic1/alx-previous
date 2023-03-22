#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * @array: the array of the integers to process
 * @size: the size of the array
 * @action: a pointer to the function to apply to each element
 *
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action !=NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
