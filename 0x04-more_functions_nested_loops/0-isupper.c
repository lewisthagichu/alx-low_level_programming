#include "main.h"

/**
* _isupper(int c) - checks for uppercase character
* @c: the value to be checked
* Return: 1 if c is uppercase
*/

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}	
