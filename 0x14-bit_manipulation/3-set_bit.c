#include "main.h"
/**
 * set_bit - This function sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to the number whose bit value is to be set.
 * @index: The index of the bit to be set starting from 0.
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred, i.e:
 *           - The index is greater than the number of
 *           bits in an unsigned long int minus 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}
