#include "main.h"
/**
 * _strlen_recursion - return string length
 * @a:string measured
 *
 * If sucessful, return The length of the string.
 * If not, return: undefined
 */
int _strlen_recursion(char *a)
{
	int longit = 0;

	if (*a)
	{
		longit++;
		longit += _strlen_recursion(a + 1);
	}

	return (longit);
}
