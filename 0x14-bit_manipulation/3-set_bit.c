#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 *
 * @n: a pointer to unsigned long int number
 * @index: the index
 *
 * Return: 1 if it works or 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
