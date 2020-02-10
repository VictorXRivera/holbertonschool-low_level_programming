#include "holberton.h"

/**
   * print_alphabet - Function to print the alphabet using main file
   * alpha - char data type variable
   * Return: 0
   */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');

}
