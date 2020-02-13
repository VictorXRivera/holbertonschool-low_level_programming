#include "holberton.h"

/**
  * more_numbers - function to print numbers from 0 to 14
  * Return: success
  */
void more_numbers(void)
{
	int lines;
	long int n;

	for (lines = 0; lines < 10; lines++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
