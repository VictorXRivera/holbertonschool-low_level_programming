#include "holberton.h"

/**
  * print_binary - function to print a binary number
  * @n: binary number
  * Return: Void
  */
void print_binary(unsigned long int n)
{
	while (n == 0 || n == 1)
	{
		_putchar((n & 1) ? '1' : '0');
		return;
	}
	print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
}
