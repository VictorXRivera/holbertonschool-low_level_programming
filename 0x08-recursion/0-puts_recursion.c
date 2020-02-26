#include "holberton.h"

/**
  *
  *
  *
  */
void _puts_recursion(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		_putchar(s[count]);

	_putchar('\n');
}
