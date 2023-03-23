#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *f;

	if (argc != 2)
	{
	printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = (char *)main;
	for (i = 0; i < bytes; i++)
	{
	printf("%02hhx", f[i]);
		if (i != bytes - 1)
		printf(" ");
		else
		printf("\n");
	}
	 return (0);
}

