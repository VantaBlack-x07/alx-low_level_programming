#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated.
 *
 * Return: pointer to the duplicated string,
 * or NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc(strlen(str) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	strcpy(arr, str);

	return (arr);
}
