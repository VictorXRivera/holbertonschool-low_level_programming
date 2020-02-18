#include "holberton.h"

/**
  * puts2 - function to print every other character
  * @str: parameter
  * Return: Success
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
