#include "main.h"

/**
 * _strlen_recursion - returns the  length of a string
 * @s: the string ro be measuered
 * Return: the length of a string
 */
int _strlen _recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen _recursion(s + 1);
	}
	return (longit);
}
