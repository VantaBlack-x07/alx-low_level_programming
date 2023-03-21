#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints all single digit numbers
* of base 10 starting from 0
*
* Return: 0 (success)
*
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
{
		printf("%i", n);
		n++;
}
	printf("\n");

	return (0);
}

