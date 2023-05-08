#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 *
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}
/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
		length = write(f, text_content, _strlen(text_content));
	close(f);
	if (length == -1)
		return (-1);
	return (1);
}
