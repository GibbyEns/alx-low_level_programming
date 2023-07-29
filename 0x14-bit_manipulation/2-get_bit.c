#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a decimal number.
 * @n: The number to search (decimal number).
 * @index: The index of the bit (0-based index).
 *
 * Return: On success, returns the value of the bit at the specified index.
 *         If the index is invalid, the function behavior is undefined.
 *         The function does not perform any
 *         error handling for invalid indices.
 *
 * Description: This function takes a decimal number @n and an index @index,
 *              representing the bit position (0-based) to retrieve. It then
 *              returns the value of the bit (0 or 1) at that index.
 *              Note: The least significant bit (LSB) is at index 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
