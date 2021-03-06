#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - function that returns pointer to 2d array of integers
  * @width: Parameter
  * @height: Parameter
  * Return: pointer
  */
int **alloc_grid(int width, int height)
{
	int rows;
	int columns;
	int **doubarray;

	if (height <= 0 || width <= 0)
		return (NULL);

	doubarray = malloc(sizeof(int *) * height);
	if (doubarray == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{
		doubarray[rows] = malloc(sizeof(int) * width);
		if (doubarray[rows] == NULL)
		{
			for (columns = 0; columns < rows; columns++)
				free(doubarray[columns]);
				free(doubarray);
				return (NULL);
		}
		for (columns = 0; columns < width; columns++)
		{
			doubarray[rows][columns] = 0;
		}
	}
	return (doubarray);
}
