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
	int len = strlen(str);
	int start_i = length / 2;

	if (len % 2 != 0)
	{
		start_i += 1;
	}
	for (int i = start_i; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
