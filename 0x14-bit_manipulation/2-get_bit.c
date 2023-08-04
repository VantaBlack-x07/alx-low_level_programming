#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of
 * a bit at a given index.
 *
 * @n: the number
 * @index: index
 *
 * Return: the value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((num >> index) & 1);
}
