#include "holberton.h"

/**
  *
  *
  *
  */
void print_square(int size)
{
	int square, columns;

	if (size <= 0)
		_putchar('\n');

	for (square = 0; square < size; square++)
	{
		for (columns = 0; columns < size; columns++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
