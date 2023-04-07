#include "main.h"

/**
* _sqrt_recursion - function that returns the natural
* square root of a number
*
* @n: the number
* @x: the value
*
* Return: the number squared
*
*/

int sqr(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
* sqr - help function that returns the natural
* square root of a number
*
* @n: the number
* @x: the value of the square
*
* Return: the number squared
*
*/

int sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
	{
		return (sqr(n, x + 1));
	}
	return (-1);
}
