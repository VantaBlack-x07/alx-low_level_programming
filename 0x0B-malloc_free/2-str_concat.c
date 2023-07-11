#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings
* @s1: first string to concatenate
* @s2: second string to concatenate
*
* Return: pointer to concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	arr = malloc(len1 + len2 + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	strcpy(arr, s1);
	strcpy(arr + len1, s2);

	return (arr);
}
