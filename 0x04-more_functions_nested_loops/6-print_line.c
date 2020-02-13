#include "holberton.h"

/**
  * print_line - function to print underscore
  * @n: parameter
  * Return: success
  */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
