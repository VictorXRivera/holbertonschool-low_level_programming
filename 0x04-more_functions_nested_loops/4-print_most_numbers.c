#include "holberton.h"

/**
  * print_most_numbers - function to print most numbers
  * Return: success
  */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
