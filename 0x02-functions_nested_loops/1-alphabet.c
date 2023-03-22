#include "main.h"

/**
* main - entry point
*
* Description: function that prints the alphabet, in lowercase, followed by a new line.
*
* Return: 0 (success)
*
*/

void print_alphabet(void)
{
	int ch;

	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
