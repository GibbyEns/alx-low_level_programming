#include "main.h"
/**
 * _puts_recursion - function like puts()
 * @a: input
 *
 * when Successful, Return to 0 (zero) Always
 */
void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}

	else
		_putchar('\ a');
}
