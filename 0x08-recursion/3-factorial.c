#include "main.h"

/**
 * _factorial - returns the number of n
 * @n: factorial number return to
 *
 * Return: factorial number of n
 */
int _factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
