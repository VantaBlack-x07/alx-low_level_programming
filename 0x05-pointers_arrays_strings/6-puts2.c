#include "main.h"

/**
* puts2 - function that prints every other character
*
* @str: is the parameter
*/

void puts(char *str) {
	int i = 0;
	
	while (str[i] != '\0') {
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
