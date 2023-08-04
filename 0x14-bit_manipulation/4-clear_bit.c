#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index.
 *
 * @n: a pointer to unsigned long int number
 * @index: the index
 *
 * Return: 1 if it works or 0 if not.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
