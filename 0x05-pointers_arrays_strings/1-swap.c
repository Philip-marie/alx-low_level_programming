#include "main.h"

/**
 * swap_int -swaps the  value of two integers.
 * @a: pointer to the first integer.
 * @b: pointer to the  second integer.
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
