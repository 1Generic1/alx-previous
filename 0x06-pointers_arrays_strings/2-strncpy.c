#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: string to be copied
 * @n: maximum number of characters to be copied from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
