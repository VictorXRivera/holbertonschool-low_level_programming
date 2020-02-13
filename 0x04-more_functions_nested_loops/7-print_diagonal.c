#include "holberton.h"
/**
  * print_diagonal - function that draws a diagonal line
  * @n: parameter
  * Return: diagonal line
  */
void print_diagonal(int n)
{
	int lines;
	int spaces;

	for (lines = 0; lines < n; lines++)
	{
		for (spaces = 0; spaces < lines; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
