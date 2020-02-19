#include "holberton.h"

/**
  * puts_half - function to print half of string
  * @str: parameter
  * Return: Success
  */
void puts_half(char *str)
{
	int count = 0;
	int length = 0;

	while (str[count] != '\0')
		count++;

	if (str[count] % 2 != 0)
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
