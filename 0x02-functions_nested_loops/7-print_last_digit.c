#include "holberton.h"

/**
  *
  *
  */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	_putchar('0' + lastdigit);

	return (lastdigit * -1);
}
