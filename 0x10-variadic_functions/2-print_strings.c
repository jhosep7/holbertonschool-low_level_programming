#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator:char
 * @n:un int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *MyArr;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		MyArr =	va_arg(arguments, char*);
		if (MyArr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", MyArr);
		}
		if (i != (n - 1) && separator != NULL)
		{printf("%s", separator); }
	}
	printf("\n");
	va_end(arguments);
}
