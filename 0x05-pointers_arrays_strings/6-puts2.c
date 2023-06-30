#include "main.h"
#include <string.h>

/**
* puts2 - function that prints every other character
*
* @str: is the parameter
*/

void puts2(char *str)
{
	int i = 0;
	int x = strlen(str);

	while (i < x)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
