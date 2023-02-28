#include "main.h"

/**
 * _strcpy - entry point
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for ( i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest [i] = '\0';
	return dest;
}
