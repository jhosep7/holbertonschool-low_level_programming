#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n:int
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	
	if (n == 0)
	{
		return (0);
	}
	va_start(arguments, n);
	for (unsigned int x = 0; x < n; x++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
