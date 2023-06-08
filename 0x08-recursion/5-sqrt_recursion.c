#include "main.h"

int actual_sqrt_recursion(int a, int b);

/**
 * _sqrt_recursion - returns the natural square root number
 * @a: number to calculate the square root of
 *
 * Return: square root result
 */

int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of numbers
 * @a: number used to calculate the sqaure root of
 * @b: the iterator
 *
 * Return: square root results
 */

int actual_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (actual_sqrt_recursion(a, b + 1));
}
