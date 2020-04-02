#include "holberton.h"

/**
  * clear_bit - function to clear bit
  * @n: pointer
  * @index: index of bits
  * Return: Cleared bit or 0
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	return (*n & (~(1 << (index - 1))));
}
