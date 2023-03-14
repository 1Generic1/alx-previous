#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it 
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: if size is 0 or memory allocation fails return NULL.
 * else return a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
