#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to a comparison function
 *
 * Retutn: index of the first element for which the cmp function 
 * does not return 0 or -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
