#include "main.h"

/**
* main - no main
*
* description - prints the alphabet 10times
*
* Return: Void
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

