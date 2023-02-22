#include "main.h"
/**
 * print _alphabet - a function that prints the alphabet, in lowercase
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
