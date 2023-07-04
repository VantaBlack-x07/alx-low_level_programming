#include "main.h"

/**
* _strpbrk - function that searches a string for
* any of a set of bytes.
*
* @s: the string
* @accept: characters that will be searched in s
*
* Return: pointer to the byte in s
* that matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
int x, y;

for (x = 0; s[x] != '\0'; x++)
{
	for (y = 0; accept[y] != '\0'; y++)
	{
		if (s[x] == accept[y])
		{
			return (&s[x]);
		}
	}
	if (accept[y] == '\0')
	{
		return (NULL);
	}
}

return (NULL);
}
