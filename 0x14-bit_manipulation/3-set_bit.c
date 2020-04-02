#include "holberton.h"

/**
  * set_bit - function to set bit
  * @n: pointer
  * @index: Starting point
  * Return: set bit
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter;

	while (index < 64)
	{
		setter = 1 << index;
		*n = *n | setter;
		return (1);
	}
	return (-1);
}
