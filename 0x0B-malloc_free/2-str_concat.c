#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string to be concated
 * @s2: second string to be concated
 *
 * Return: pointer to new concated string OR NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	char *arr = malloc(strlen(s1) + strlen(s2) + 1);
	int len = strlen(s1) + strlen(s2) + 1;

	if (arr == NULL)
	{
		return (NULL);
	}
	strcpy(arr, s1);
	strcat(arr, s2);
	arr[len] = '\0';

	return (arr);
}

