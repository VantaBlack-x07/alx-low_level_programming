#include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
*
* @a: the string
*
* Return: changed string
*/

char *cap_string(char *a)
{
int i;

for (i = 0; a[i] != '\0'; i++)
{
	if (a[i] >= 'A' && a[i] <= 'a')
	{
		a[i] = a[i] + ('a' - 'A');
	}
}
return (a);
}
