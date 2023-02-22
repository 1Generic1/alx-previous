#include "main.h"
/**
 * print _alphabet: Entry point
 *
 * Return: Always 0 on Sucess
 */
void print_alphabet(void)
{
	char i = 'a';
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
}
