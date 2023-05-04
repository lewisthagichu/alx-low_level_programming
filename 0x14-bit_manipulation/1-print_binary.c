#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;
	for (i = 1; i <= pow; i++)
		numb *= base;
	return (numb);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dep, result;
	char flag;

	flag = 0;
	dep = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dep != 0)
	{
		result = n & dep;
		if (result == dep)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dep == 1)
		{
			_putchar('0');
		}
		dep >>= 1;
	}
}
