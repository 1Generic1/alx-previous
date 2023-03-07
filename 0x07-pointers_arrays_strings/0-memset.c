#include "main.h"

/**
 * _memset - entry point of function that fills memory ith constant
 * @s: pointer to the memory area to be filled
 * @b: constant byte value to fill memory with
 * @n: number of byte of the memory to be filled
 *
 * Return: returns pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
