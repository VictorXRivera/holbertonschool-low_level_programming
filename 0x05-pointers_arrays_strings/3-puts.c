#include "holberton.h"

/**
  * _puts - function to print string followed by newline
  * @str: parameter
  * Return: Success
  */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
