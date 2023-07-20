#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: the array of integers
 * @size: size of the array
 * @cmp: a pointer to a function
 *
 * Return: int index OR -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (array && size > 0 && cmp)
{
	for (x = 0; x < (int)size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
}
return (-1);
}
