#include <stdio.h>

/**
 * strcmp - function that compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if the strings are equal,
 *	 a negative integer if s1 is less than s2,
 *	 or a positive integer if s1 is greater than s2
 */
int strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2 != '\0'; i++)
{
	if (s1[i] == s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
