#include <stdio.h>
/**
 * main - Entry point: that prints the lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')

	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
