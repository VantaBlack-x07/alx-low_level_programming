#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory using malloc.
*
* @b: num of bytes to allocate
*
* Return: pointer to the allocated memory
*
*/

void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
