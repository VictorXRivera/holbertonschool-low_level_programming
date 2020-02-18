#include "holberton.h"

/**
  *
  *
  *
  */
void puts2(char *str)
{
	int count = 0;
	int inc = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	while (inc <= count)
	{
		_putchar(str[inc]);
		inc += 2;
	}
	_putchar('\n');
}
