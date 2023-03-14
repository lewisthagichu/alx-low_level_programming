#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2;

	result = (char *)malloc(sizeof(char) * len + 1);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
