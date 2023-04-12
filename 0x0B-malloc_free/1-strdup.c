#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: array to be copied
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *x;
	int i = 0, s = 0;

	if (str == 0)
		return (0);

	for (; str[s] != '\0'; s++)
		x = malloc(s * sizeof(*str) + 1);

	if (x == 0)
		return (0);
	else
	{
		for (; i < s; i++)
			x[i] = str[i];
	}
	return (x);
}
