#include "main.h"
#include <string.h>

/**
* _strncat - function that concatenates two strings.
*
* @dest: destination string
* @src: string to add to dest
* @n: a number
*
* Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i + len] = src[i];
}
dest[len + i] = '\0';

return (dest);
}
