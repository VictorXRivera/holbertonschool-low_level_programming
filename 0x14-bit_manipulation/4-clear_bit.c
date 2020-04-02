#include "holberton.h"

/**
  * clear_bit - function to clear bit
  * @n: pointer
  * @index: index of bits
  * Return: 1 on success or 0 on error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = (*n & ~(1 << index));
	return (1);
}
