#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times
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