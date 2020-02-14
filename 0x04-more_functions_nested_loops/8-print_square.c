#include "holberton.h"

/**
  *
  *
  *
  */
void print_square(int size)
{
	int square, SQUARE;

	if (size < 0)
		_putchar('\n');

	for (square = 0; square < size; square++)
	{
		for (SQUARE = 0; SQUARE < square; SQUARE++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
