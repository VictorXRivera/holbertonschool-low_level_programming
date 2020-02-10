#include "holberton.h"

/**
  * print_alphabet_x10 - Function to print the alphabet in lowercase
  * alpha - char variable
  * Return: 0
  */
void print_alphabet_x10(void)
{
	char alpha;
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		for (alpha = 'a'; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
