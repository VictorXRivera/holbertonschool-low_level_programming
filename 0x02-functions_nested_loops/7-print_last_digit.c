#include "holberton.h"

/**
  * print_last_digit - function to print last digit
  * @n: parameter for function
  * Return: lastdigit
  */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
		_putchar(lastdigit + '0');

	return (lastdigit);
}
