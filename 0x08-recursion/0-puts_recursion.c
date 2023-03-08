#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: string to be printed
 * return: void
 **/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recussion(s + 1);
	}
	_putchar('\n');
}
