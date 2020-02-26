#include "holberton.h"

/**
  * _puts_recursion - function to print string followed by newline
  * @s: pointing to string from main func
  * Return: _putchar string
  */
void _puts_recursion(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		_putchar(s[count]);

	_putchar('\n');
}
