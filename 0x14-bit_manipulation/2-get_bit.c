#include "main.h"
/**
 * get_bit - This function returns the value of a bit at a given index.
 *
 * @n: The number to check the bit.
 * @index: The index of the bit to check.
 *
 * Return: The value of the bit at the given index, or -1 if:
 *           - The index is greater than the number of
 *           bits in an unsigned long int minus 1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	b = n & a;
	if (a == b)
		return (1);

	return (0);
}
