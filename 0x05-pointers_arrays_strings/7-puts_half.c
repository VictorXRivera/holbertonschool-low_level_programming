#include "holberton.h"

/**
  * puts_half - function to print half of string
  * @str: parameter
  * Return: Success
  */
void puts_half(char *str)
{
	int count;
	int length = _strlen(str);

	if (length % 2 == 0)
	{
		for (count = length / 2; count < length; count++)
			_putchar(str[count]);
	}
	else if (length % 2 != 0)
	{
		for (count = (length - 1) / 2; count < length; count++)
		length = (count - 1) / 2;
		_putchar(str[count]);
	}
	_putchar('\n');
}
