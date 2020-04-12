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
		return (1);
	else
		return (0);
	getchar();
}
