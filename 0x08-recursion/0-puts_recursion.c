#include "holberton.h"

/**
  * _puts_recursion - function to print string followed by newline
  * @s: pointing to string from main func
  * Return: _putchar string
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
