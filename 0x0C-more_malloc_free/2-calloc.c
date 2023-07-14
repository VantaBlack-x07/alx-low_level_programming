#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array using malloc.
 *
 * @nmemb:num of elements to allocate memory for
 * @size: the size of each element
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, size * nmemb);

	return (arr);
}
