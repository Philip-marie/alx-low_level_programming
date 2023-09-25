#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: imput
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[];
	char s2[];

	for (i = 0; n[i] != '\0; j++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] ==s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
