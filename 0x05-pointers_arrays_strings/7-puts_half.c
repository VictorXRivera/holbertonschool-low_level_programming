#include "holberton.h"

/**
  *
  *
  */
void puts_half(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
}
