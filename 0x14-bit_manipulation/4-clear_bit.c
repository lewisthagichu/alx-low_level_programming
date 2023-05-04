#include "main.h"
/**
 * clear_bit - This function sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to the number whose bit value is to be cleared.
 * @index: The index of the bit to be cleared starting from 0.
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred:
 *           - The index is greater than the number
 *           of bits in an unsigned long int minus 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = ~(1 << index);
	*n = *n & j;

	return (1);
}
