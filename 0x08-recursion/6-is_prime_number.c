#include "main.h"

int actual_prime(int a, int b);
/**
 * is_prime_number - if an integer is a prime number or not
 * @a: number to evaluate
 *
 * Return: 1 if a to a prime number, 0 if not
 */
int is_prime_number(int a)
{
	if (a <= 1)
		return (0);
	return (actual_prime(a, a - 1));
}

/**
 * actual_prime - calculates whether a number is prime recursively
 * @a: number evaluated
 * @b: the iterator
 *
 * Return: 1 if a is prime, 0 if not
 */

int actual_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (actual_prime(a, b - 1));
}
