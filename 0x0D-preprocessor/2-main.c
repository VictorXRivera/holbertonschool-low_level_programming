#include "holberton.h"
#include <stdio.h>

/**
  * main - program to print name of file it is compiled from
  * @argc: count of arguments
  * @argv: count of strings
  * Return: Name of program
  */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
