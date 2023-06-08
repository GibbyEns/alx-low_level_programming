#include "main.h"
/**
 * _strlen_recursion - return string length
 * @s:string measured
 *
 * If sucessful, return The length of the string.
 * If not,
 * Return: undefined
 */
int _strlen_recursion(char *s)
{
	int string = 0;

	if (*s)
	{
		string++;
		string += _strlen_recursion(s + 1);
	}

	return (string);
}
