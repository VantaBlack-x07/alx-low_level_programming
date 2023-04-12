#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
