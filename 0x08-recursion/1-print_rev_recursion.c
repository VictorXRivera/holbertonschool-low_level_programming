#include "holberton.h"

/**
  * _print_rev_recursion - function to reverse string
  * @s: pointer to string from main function
  * Return: putchar string in reverse
  */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
