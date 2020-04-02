#include "holberton.h"

/**
  * get_bit - function to find bits
  * @n: unsigned int
  * @index: index of the bit we want to get
  * Return: 1 on success
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitfinder;

	if (index >= 64)
		return (-1);

	bitfinder = 1 << index;

	if ((n & bitfinder) == 0)
		return (0);
	else
		return (1);
}
