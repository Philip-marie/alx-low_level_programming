#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
