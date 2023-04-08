#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @x: number to search
 * @i: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int x, unsigned int i)
{
	int bitVal;

	if (i > 63)
		return (-1);

	bitVal = (x >> i) & 1;

	return (bitVal);
}

