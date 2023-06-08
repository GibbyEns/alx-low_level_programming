#include "main.h"

int check_pal(char *r, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks whether a string is a palindrome
 * @r: string to reverse
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *r)
{
	if (*r == 0)
		return (1);
	return (check_pal(r, 0, _strlen_recursion(r)));
}

/**
 * _strlen_recursion - return the length of string
 * @r: string to calculate the length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *r)
{
	if (*r == '\0')
		return (0);
	return (1 + _strlen_recursion(r + 1));
}

/**
 * check_pal - checks for characters recursively for palindrome
 * @s: string to check
 * @b: iterator
 * @len: length of the string
 *
 * Return: 1 if true palindrome, 0 if not false
 */
int check_pal(char *s, int b, int len)
{
	if (*(s + b) != *(s + len - 1))
		return (0);
	if (b >= len)
		return (1);
	return (check_pal(s, b + 1, len - 1));
}
