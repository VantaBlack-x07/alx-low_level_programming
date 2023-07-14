#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: first n bytes of the 2nd string.
 *
 * Return: pointer to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len1, len2, i;

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
	{
		len2 = n;
	}

	arr = malloc(len1 + len2 + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		arr[len1 + i] = s2[i];
	}

	arr[len1 + len2] = '\0';

	return (arr);
}
