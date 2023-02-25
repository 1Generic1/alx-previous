#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times of the character to be printed
 *
 * Return a straight line
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

