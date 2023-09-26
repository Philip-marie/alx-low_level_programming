#include "main.h"

/**
 * _strstr - Entry point
 * @s: imput
 * @c: imput
 * Return: Always 0 (success)
 */
char *_strstr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
