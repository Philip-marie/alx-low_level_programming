#include "main.h"
/**
 * print_numbers - Checks for a digit (0 thhrough 9)
 * Return: Always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
