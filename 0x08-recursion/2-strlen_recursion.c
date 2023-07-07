#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
*
* @s: the string
*/

int _strlen_recursion(char *s)
{
int n = 0;

if (*s != '\0')
{
	n++;
	_strlen_recursion(1 + (s + 1));
}
return (n);
}
