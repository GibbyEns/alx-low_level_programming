#include "main.h"

/**
 * clear_bit – This sets the value of a given bit to 0
 * @n: The pointer to the number to change
 * @index: The index of the bit to clear
 *
 * Return: success 1 if not,  -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
