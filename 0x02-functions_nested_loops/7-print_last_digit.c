#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
*
* @n: last digit
*
* Return: n
*
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
{
	n *= -1;
}
	_putchar(n + 48);
	return (n);
}
