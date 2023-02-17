#include <stdio.h>
/**
* main - Entry point
*
* Description: prints the lowercase alphabet in reverse.
*
* Return: Always 0 (success).
*/

int main(void)
{
	int i = 122;

	while (i < 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
