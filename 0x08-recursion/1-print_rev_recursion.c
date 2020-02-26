#include "holberton.h"

/**
  * _print_rev_recursion - function to reverse string
  * @s: pointer to string from main function
  * Return: putchar string in reverse
  */
void _print_rev_recursion(char *s)
{
	int index = 0;
	int reverse;

	while (s[index] != '\0')
		index++;

	index--;
	reverse = index;
	while (reverse >= 0)
	{
		_putchar(s[reverse]);
		reverse--;
	}
}
