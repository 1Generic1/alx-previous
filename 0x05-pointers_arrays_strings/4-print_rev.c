#include "main.h"
/**
 * print_rev - entry point
 * @s: the string
 */
void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		;
	}
	for (j = j-1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
