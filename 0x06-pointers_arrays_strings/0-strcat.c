#include "main.h"

/**
 * _strcat -  entry point, function that concatenates two strings
 * @src: the string
 * @dest: also string
 * Return: *dest
 */

char *_strcat(char *dest, char *src);
{
	int dest_len = 0, src_len = 0;

	while (dest[dest_len] =! '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
