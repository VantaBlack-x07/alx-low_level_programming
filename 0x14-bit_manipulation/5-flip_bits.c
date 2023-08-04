#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: 1at number
 * @m: 2nd number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num = n ^ m;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}

	return (count);
}
