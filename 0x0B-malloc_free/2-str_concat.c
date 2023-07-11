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
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;

	char *arr = malloc(len1 + len2 + 1);
	if (arr == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(arr, s1);
	if (s2 != NULL)
		strcpy(arr + len1, s2);

	return (arr);
}
