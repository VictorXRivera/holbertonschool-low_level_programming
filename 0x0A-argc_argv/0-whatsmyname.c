#include "holberton.h"
#include <stdio.h>

/**
  * main - function to print it's name followed by newline
  * @argc: Number of arguments
  * @argv: Double pointer and one dimensional array
  * Return: Success
  */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv++);
	return (0);
}
