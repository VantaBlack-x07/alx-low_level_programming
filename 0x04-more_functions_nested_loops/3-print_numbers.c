#include "main.h"

/**
* print_numbers - function that prints the numbers,
* from 0 to 9, followed by a new line
*
* Return: Always 0 (success)
*
*/

void print_numbers(void)
{
	num = 0;

	while (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		num++;
		_putchar('\n');
	}
}
