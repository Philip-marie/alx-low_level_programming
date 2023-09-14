#include <stdio.h>
/**
 * main - Entry point: that prints  lowercase, followed by uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';

	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
