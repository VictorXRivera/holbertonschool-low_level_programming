#include "holberton.h"

/**
  * _pow_recursion - Function to get the power of recursively
  * @x: integer parameter
  * @y: integer parameter
  * Return: result of x to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x,y - 1));
}
