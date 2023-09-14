#include <stdio.h>
/**
 * main - Entry point: that prints simpe-digits number of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
