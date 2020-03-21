#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - function to free the grid
  * @grid: Double pointer to be free
  * @height: variable to count through
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
