#include "main.h"
/**
 * _print_rev_recursion - string printed in reverse
 * @b: string to be printed
 *
 */
void _print_rev_recursion(char *b)
{
	if (*b)
	{
		_print_rev_recursion(b + 1);
		_putchar(*b);
	}
}
