#include "main.h"
#include <string.h>
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
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_ptr);
}
