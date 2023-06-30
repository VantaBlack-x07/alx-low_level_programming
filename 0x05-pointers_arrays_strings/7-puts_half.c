#include "main.h"
#include <string.h>

/**
* puts_half - function that prints half of a string
*
* @str: is the parameter.
*
*/

void puts_half(char *str)

{

int x, len = strlen(str);
char y;

for (x = len / 2; x < len; x++)
{
	y = str[x];
	_putchar(y);
}
_putchar('\n');
}
