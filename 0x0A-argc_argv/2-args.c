#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of command argument in the program
 * @argv: actual command argument to the program
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc);
	{
		printf("%s/n", argv[i]);
		i++;
	}
	return (0);
}
