#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @x: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *x)
{
	int i;
	unsigned int dval = 0;

	if (!x)
		return (0);

	for (i = 0; x[i]; i++)
	{
		if (x[i] < '0' || x[i] > '1')
			return (0);
		dval = 2 * dval + (x[i] - '0');
	}

	return (dval);
}

