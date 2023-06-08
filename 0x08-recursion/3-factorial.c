#include "main.h"

/**
 * Factorial - returns the number of a
 * @a: factorial number return from.
 *
 * Return: factorial number of a
 */
int _factorial(int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (1);
	return (a * factorial(a - 1));
}
