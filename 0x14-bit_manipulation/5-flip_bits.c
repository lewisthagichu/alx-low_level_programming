#include "main.h"

/**
 * flip_bits - Counts the number of bits
 * needed to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, answer;
	unsigned int a, b;

	a = 0;
	answer = 1;
	difference = n ^ m;
	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (answer == (difference & answer))
			a++;
		answer <<= 1;
	}

	return (j);
}
