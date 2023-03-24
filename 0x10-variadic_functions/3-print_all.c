#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - program that prints the opcodes of its own main function
 * @start: pointer to the function whose opcodes are to be printed
 * @n_bytes: number of bytes of opcodes to print
 *
 * Return: VOid
 */

void print_opcodes(char *start, int n_bytes)
{
	int i;
	printf("opcode listing:\n");
	for (i = 0; i < n_bytes; i++)
	{
		printf("%02hhx ", *(start + i));
	}
	printf("\n");
}

/**
 * main - entry point of the program
 *
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 if successful, 1 if invalid number of arguments,
 * 2 if invalid argument
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	int n_bytes = atoi(argv[1]);
	if (n_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char*)&main, n_bytes);
	return (0);
}

