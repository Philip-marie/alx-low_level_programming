#include "main.h"
/**
 * print_square - Function that prints square
 * @size: Size of square
 * Description: Can only use _putchar to print, use # to print square
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;

		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
