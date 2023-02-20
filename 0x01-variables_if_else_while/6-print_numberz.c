#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always 0 on success
 */
int main(void)
{
	int i = 0;

	for ( i= 0; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
		return (0);
}
