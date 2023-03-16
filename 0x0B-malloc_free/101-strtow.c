#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - functions that splits a string into words
 * @str: the string we want to split
 *
 * Return: NULL on failure, the number of words in the string
 */

char **strtow(char *str)
{
	if (str == NULL || "")
	{
		return (NULL);
	}
