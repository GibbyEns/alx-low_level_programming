#include "main.h"

/**
 * factorial - returns the factorial number
 * @n: factorial number return to
 *
 * Return: factorial number of a number
 */
int _factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
