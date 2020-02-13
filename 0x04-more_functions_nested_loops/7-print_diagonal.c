#include "holberton.h"

/**
  * print_diagonal - function that draws a diagonal line
  * @n: parameter
  * Return: diagonal line
  */
void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar(92);
	}
	_putchar('\n');
}
