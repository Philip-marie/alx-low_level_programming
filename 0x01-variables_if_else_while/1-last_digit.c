#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	printf("c of %d is %d", n, c);
	if (c > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (c == 0)
	{
		printf(" and is greater than 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
