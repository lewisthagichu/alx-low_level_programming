/**
 * binary_to_uint - This function converts a binary number represented as a
 *                  string of '0' and '1' to an unsigned integer.
 *
 * @b: A pointer to a string of '0' and '1' chars representing a binary number.
 *
 * Return: The converted number as an unsigned integer, or 0 if:
 *           - The input string is NULL.
 *           - The input string contains characters that are not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
