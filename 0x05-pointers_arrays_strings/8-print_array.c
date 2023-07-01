#include "main.h"

/**
* print_array - function that prints n elements of an array of integers
*
* @a: is a parameter
* @n: is a parameter
*
*/

void print_array(int *a, int n)

{
int x;

for (x = 0; x < n; x++)
{
	printf("%i", a[x]);
	if (a[x] != '\0')
	{
	printf(", ");
	}
}
_putchar('\n');
}
