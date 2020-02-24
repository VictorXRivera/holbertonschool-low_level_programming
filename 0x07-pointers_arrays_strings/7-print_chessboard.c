#include "holberton.h"

/**
  * print_chessboard - function to print chessboard
  * @a: pointer
  * Return: Chessboard
  */
void print_chessboard(char (*a)[8])
{
	int columns, rows;

	for (columns = 0; columns < 8; columns++)
	{
		for (rows = 0; rows < 8; rows++)
		{
			_putchar(a[columns][rows]);
		}
		_putchar('\n');
	}
}
