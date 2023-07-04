#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the first occurrence of the character c in the string s
 *		 NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ptr = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}

	return (ptr);
}
