#include "main.h"

/**
 * reverse_array - function that reverse_array
 * @a: string to be reversed
 * @n: integer number of element of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
