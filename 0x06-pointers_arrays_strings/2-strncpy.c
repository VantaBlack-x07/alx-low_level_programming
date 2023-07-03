#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of characters to concatenate
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
{
	dest[x] = src[x]
}
dest[x] = '\0';

return (dest);
}
