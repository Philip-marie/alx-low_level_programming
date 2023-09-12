#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %4 bytes(s)\n", sizeof(char));
	printf("size of an int: %4 byt(s)\n", sizeof(int));
	printf("size of a long int: %4 byte(s)\n",  sizeof(long int));
	printf("size of a long long int: %4 byte(s)\n", sizeof(long long int));
	printf("size of a float: %4 byte(s)\n", sizeof(float));
	return (0);
}
