#include "main.h"
#include <unistd.h>
/**
 * _putchar – This writes the char c to stdout
 * @c: Char to print
 *
 * Return: Success, 1.
 * if not, error -1 is returned and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

