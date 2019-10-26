#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:char.
 * @n:Un Int.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));
		if (i != (n - 1) && separator != NULL)
		{printf("%s", separator); }
	}
	printf("\n");
	va_end(arguments);
}
