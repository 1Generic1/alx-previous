#include "main.h"
#include <stdio>

/**
 * print_array - entry point 
 * @a: the array of integers
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print("%d", a[i]);

		if (i != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
