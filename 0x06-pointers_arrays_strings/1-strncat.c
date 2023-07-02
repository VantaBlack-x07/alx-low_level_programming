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
char *dest_ptr = dest;
int len = strlen(dest);
int i;

*dest_ptr = dest;
for (i = 0; i <= n; i++)
{
	dest_ptr[i + n] = src[i];
}

return (dest_ptr);
}
