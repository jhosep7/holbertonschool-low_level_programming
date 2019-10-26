#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n:int
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0, x = n;

	if (n == 0)
	{
		return (0);
	}
	va_start(arguments, n);
	while (x--)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
