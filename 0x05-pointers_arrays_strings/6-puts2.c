#include "main.h"


/**
* puts2 - function that prints every other character
*
* @str: is the parameter
*/

void puts2(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
