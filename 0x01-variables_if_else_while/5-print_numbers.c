#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints all single digit numbers
* of base 10 starting from 0, followed by a new line
*
* Return: 0 (success)
*
*/

int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
{
		putchar(x);
}
	return (0);
}
