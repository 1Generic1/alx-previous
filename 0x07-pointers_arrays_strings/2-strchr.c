#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string where the character is to be located
 * @c: the character
 *
 * Return: return character *c or Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (null);
}
