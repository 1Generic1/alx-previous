#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: number input
 * Return: Always 0 on success
 */
void print_to_98(int n)
{
		while (n != 98) {
			printf("%d, ", n);
			if (n < 98) {
				n++;
			}
			else
			{
				n--;
			}
		}
printf("98\n");
}
