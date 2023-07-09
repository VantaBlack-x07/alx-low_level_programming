#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to look for
 *
 * Return: pointer to the beginning of
 * the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	/* check for empty strings */
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		/* start searching at the beginning of haystack */
		h = haystack;
		n = needle;

		/* compare the current characters of haystack and needle */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		/* if we reached the end of needle, we found a match */
		if (*n == '\0')
			return (haystack);

		/* otherwise, try again with the next character in haystack */
		haystack++;
	}

	/* substring not found */
	return (NULL);
}
