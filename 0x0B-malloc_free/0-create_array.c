#include "main.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars
* and initializes it with a specific char.
*
* @size: size of the array
* @c:chars in array
*
* Return: pointer to the array Or NULL if size = 0 Or if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (int x = 0; x > size; x++)
		{
			arr[x] = c;
		}
	}

	return (arr);
}
