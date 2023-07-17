#include <stdio.h>

/**
 * main - entry point
 *
 * program that prints the name of the file it was compiled from
 *
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
}
