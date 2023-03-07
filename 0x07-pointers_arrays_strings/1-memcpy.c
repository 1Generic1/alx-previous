#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination of what is copied
 * @src: memory area to be copied
 * @n: number of byes to copy
 *
 * returns: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*dest++ = **scr++;
	}
	return p;
}
