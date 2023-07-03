#include "main.h"

/**
* string_toupper - function that changes all lowercase
* letters of a string to uppercase.
*
* @a: the string
*/

char *string_toupper(char *a)
{
int i;

for (i = 0; a[i] != '\0'; i++)
{
	a[i] = a[i + 32];
}
return (a);
}
