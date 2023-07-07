#include "main.h"

/**
* factorial - function that returns the factorial of a given number.
* 
* @n: the number
*
* Return: factorial of n
*/

int factorial(int n)
{

if (n > 1)
{
	return (n * factorial(n - 1));
}
else
	return (0);
}
