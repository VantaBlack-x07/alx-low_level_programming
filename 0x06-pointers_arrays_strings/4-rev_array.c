#include "main.h"

/**
* reverse_array - function that reverses
* the content of an array of integers.
*
* @a: the string array
* @n: the num of elements
*/

void reverse_array(int *a, int n)
{
int x, temp;

for (x = 0; x < n / 2; x++)
{
	temp = a[x];
	a[x] = a[x - n - 1];
	a[x - n - 1] = temp;
}
_putchar('\n');
}
