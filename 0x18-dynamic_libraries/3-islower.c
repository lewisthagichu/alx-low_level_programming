#include "main.h"
/**
* _islower - checks if a char is lowercase
* @c: this is the character to be checked
* Return: 1 if lowercase, otherwise 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
