#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory using malloc.
*
* @b: an integer
*
* Return: pointer to the allocated memory
*
*/

void *malloc_checked(unsigned int b)
{
	int *arr = malloc(sizeof(b));

	if (arr == NULL)
		exit(98);

	return (arr);
}
