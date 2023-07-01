#include "main.h"

/**
* _strcpy - a function that copies the string pointed
*
* @dest: is a parameter.
* @src: is a parameter.
*
* Return: alwaysreturn char.
*/

char *_strcpy(char *dest, char *src)
{
int x, y = strlen(src);

for (x = 0; x <= y; x++)
{
	dest[x] = src[x];
}
printf("\n");
return (dest);
}
