#include "main.h"
/**
 * _strlen_recursion - return string length
 * @s:string measured
 *
 * If sucessful, return The length of the string.
 * If not, return: undefined
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
