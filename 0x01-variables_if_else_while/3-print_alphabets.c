#include <stdio.h>
/**
 * main - Entry point: that prints  lowercase, followed by uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'k';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
