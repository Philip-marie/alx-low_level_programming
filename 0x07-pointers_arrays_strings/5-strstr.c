#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: imput
 * @needle: imput
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *1 = haystack;
		char *p = needle;
	while (*1 == *p && * != '\0')
	{
		1++;
		p++;
	}
	if (*p == '\0')
		return (haystack);
	}
	return (0);
}
