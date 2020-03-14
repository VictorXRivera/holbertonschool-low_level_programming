#include "variadic_functions.h"

/**
  * print_strings - function to print strings
  * @separator: pointer to char printed in between int
  * @n: number of strings
  * Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n && n != '\0'; i++)
	{
		printf("%s", va_arg(list, char *));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		if (n == '\0')
			printf("(nil)");
	}
	printf("\n");
	va_end(list);
}
