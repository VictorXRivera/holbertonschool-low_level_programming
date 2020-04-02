#include "holberton.h"

/**
  * flip_bits - function to flip bits
  * @n: variable
  * @m: variable
  * Return: Flipped bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped;
	unsigned long int hold;

	flipped = 0;

	hold = n ^ m;

	while (hold)
	{
		if ((hold & 1) == 1)
		{
			flipped++;
		}
		hold = hold >> 1;
	}
	return (flipped);
}
