#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	char output[] = "_putchar\n";
	int j;
	
	for (j = 0; output[j] < '\0'; j++)
	{
		_putchar(output[j]);
	}
	return (0);
}
