#include "holberton.h"

/**
  * swap_int - function to swap values of two integers
  * @a: parameter
  * @b: parameter
  * Return: Success
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
