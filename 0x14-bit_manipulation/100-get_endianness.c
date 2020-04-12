#include "holberton.h"
/**
  * get_endianness - program to determine endianness
  * Return: 0 on success
  */
int get_endianness(void)
{
	unsigned int get = 1;
	char *endian;

	endian = (char *)&get;
	if (*endian)
		printf("Small endian");
	else
		printf("Large endian");
	getchar();
	return (0);
}
