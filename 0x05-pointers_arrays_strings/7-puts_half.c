#include "holberton.h"

/**
  *
  *
  */
void puts_half(char *str)
{
	int count = 0;
	int length = 0;

	while(str[count] != '\0')
		count ++;

	if (str[count] % 2 == 1)
	{
		length = (count - 1) / 2;
	}
	else
		length = count / 2;
	
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
