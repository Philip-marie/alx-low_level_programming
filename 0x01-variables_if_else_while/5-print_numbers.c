#include <stdio.h>
/**
 * main - Entry point: that prints simpe-digits number of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
