#include "main.h"
/**
 * _puts - entry point
 * @str: string to print
 *
 * Return: return string
 */
void _puts(char *str)
{
	int j;
		for (j = 0; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
