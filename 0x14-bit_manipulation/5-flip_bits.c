#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would 
 * need to flip to get from one number to another.
 * @n: unsigned long interger to flip
 * @m: unsigned long interger
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;
	
	while (xor_result)
	{
		count++;
		xor_result &= xor_result - 1;
	}
	return (count);
}
