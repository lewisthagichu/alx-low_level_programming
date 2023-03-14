#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int len = 0;

	while (str[len] != '\n')
	{
		len++;
	}

	copy = (char *)malloc(size of(char) * len + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[len] = '\n';
	return (copy);
}
