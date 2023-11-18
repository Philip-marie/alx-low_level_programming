#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root pf a  number
 * @n: number  to calculate the square root of
 * Return: result of the suare root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the actual square root of a number
 * @n: numener to calculate the square root of
 * @i: iterator
 * Return: the result square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i = i > n)
		return (-1);
	if (i = i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
