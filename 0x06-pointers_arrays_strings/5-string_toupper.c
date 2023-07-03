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
	if (a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] = a[i] - ('a' - 'A');
	}
}
return (a);
}
