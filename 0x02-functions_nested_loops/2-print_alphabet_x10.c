#include "main.h"

/**
*  main - entry point
*
*
* print_alphabet_x10 -  function that prints 10 times the alphabet,
* in lowercase, followed by a new line.
*
*/

void print_alphabet_x10(void)
{
	int ch;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		_putchar('\n');
	}

}
