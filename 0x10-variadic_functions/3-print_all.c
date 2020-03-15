#include "variadic_functions.h"

/**
  * print_all - function to print all arguments
  * @format: Parameter
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	const char *fmtcpy;
	int i;
	float F;
	char C;
	char *s;
	va_list list;

	va_start(list, format);
	fmtcpy = format;
	while (*fmtcpy != '\0')
	{
		switch (*++fmtcpy)
		{
			case 's':
				s = va_arg(list, char *);
				printf("%s", s);
				break;
			case 'c':
				C = va_arg(list, int);
				printf("%c", C);
				break;
			case 'f':
				F = va_arg(list, double);
				printf("%f", F);
				break;
			case 'i':
				i = va_arg(list, int);
				printf("%d", i);
				break;
			case '%':
				putchar('%');
				break;
		}
	}
	printf("\n");
	va_end(list);
}
