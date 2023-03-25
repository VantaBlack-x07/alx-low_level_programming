#include "main.h"

/**
* print_most_numbers - function that prints the numbers
* from 0 to 9 without 2 and 4
*
* Return: Always 0 (success)
*
*/


void print_most_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
	if (num == 2 || num == 4)
		continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
