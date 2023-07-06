#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - function that prints a string in reverse.
*
* @s: the string
*/

void _print_rev_recursion(char *s)
{
int x = strlen(s) - 1;

if (*s != '\0')
	_putchar(s[x]);
	_print_rev_recursion(*s - 1);
else
	_putchar('\n');
}
