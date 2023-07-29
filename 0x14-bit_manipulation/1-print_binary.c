#include "main.h"

/**
 * print_binary - Prints out the binary equivalent of a decimal number.
 * @n: The number to print in binary.
 *
 * Return: None (void).
 *
 * Description: This function takes a decimal number @n and prints its binary
 * representation to the standard output stream. The binary representation
 * will be printed without any leading zeroes. If @n is negative, the function
 * will not handle the sign; it will only handle the magnitude of the number.
 * The function does not return any value (void).
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
