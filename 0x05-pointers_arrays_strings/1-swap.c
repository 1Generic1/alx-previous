#include "main.h"
/**
 * void swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: always 0 on success
 */

void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
