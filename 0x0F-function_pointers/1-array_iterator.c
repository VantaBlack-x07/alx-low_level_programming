#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - function that executes a
* function given as a parameter on each element of an array.
*
* @array: array used
* @size: size of the array
* @action: pointer to a function
*
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL)
	{
		for (size_t x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
