#include "holberton.h"

/**
  * print_rev - function to print string then reverse
  * @s: parameter
  * Return: Success
  */
void print_rev(char *s)
{
	int count = 0; /*index count of string*/

	while (s[count] != '\0')
	{
		count++;
	}
	while (s[count] >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
