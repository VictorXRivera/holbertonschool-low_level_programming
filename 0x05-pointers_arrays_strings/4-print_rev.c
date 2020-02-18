#include "holberton.h"

/**
  * print_rev - function to print string then reverse
  * @s: parameter
  * Return: Success
  */
void print_rev(char *s)
{
	int count = 0;
	int rev;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	rev = count;
	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}
	_putchar('\n');
}
