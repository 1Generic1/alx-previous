#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - funtion that concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 *
 * Return: A pointer to the newly allocated space in memory containing
 * the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1len = 0, s2len = 0, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + s1len))
	{
	s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}

	concat_str = malloc((s1len + s2len + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
	{
	*(concat_str + i) = *(s1 + i);
	}
	for (j = 0; j < s2len; j++)
	{
		*(concat_str + i + j) = *(s2 + j);
	}
	*(concat_str + i + j) = '\0';
	return (concat_str);
}


