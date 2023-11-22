#include "main.h"
/**
 * _puts - A programn that prints tpnstadout
 * @str: the string to be printed
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar ('\n');
}
