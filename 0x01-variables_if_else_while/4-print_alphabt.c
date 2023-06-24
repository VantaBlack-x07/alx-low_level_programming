#include <stdio.h>


/**
* main - entry point
*
* Description: program that prints the alphabet
* in lowercase, followed by a new line.
*
* Return: 0 (success)
*
*/


int main(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
