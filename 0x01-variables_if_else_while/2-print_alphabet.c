#include <stdio.h>
/**
* main - entry point
*
* Description: prints the alphabet in lowercasee, followed in a newline.
*
* Return: Always 0 (success)
*/

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
