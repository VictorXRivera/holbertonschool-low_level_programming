#include "holberton.h"

/**
  * binary_to_uint - function to convert binary to decimal
  * @b: string of 0 1 chars
  * Return: Converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
			decimal = decimal * 2 + 1;
		else if (b[i] == '0')
			decimal *= 2;
		else
			return (0);
		i++;
	}
	return (decimal);
}
