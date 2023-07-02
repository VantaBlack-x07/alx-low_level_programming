#include "main.h"
#include <string.h>

/**
* _strcat - function that concatenates two strings.
*
* @dest: destination string
* @src: string to add to dest
*
* Return:pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int* dest_ptr = dest;
int i;
int y = strlen(dest);

for (i = 0; src[i] != '\0'; i++)
{
	dest_ptr[i] = dest[i];
	dest_ptr[y - 1] = src[i];
}

return (dest_ptr);
}
