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
	y = str[len - 1 - x];
	_putchar(y);
}

}
