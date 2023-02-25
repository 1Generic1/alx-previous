#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: Always 0 on success
 */

void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
