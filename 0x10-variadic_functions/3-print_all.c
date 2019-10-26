#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format:char.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int x = 0;
	char *MyArr;

	va_start(arguments, format);

	while (format[x] != '\0')
	{
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			MyArr = va_arg(arguments, char*);
			if (MyArr != NULL)
			{
				printf("%s", MyArr);
				break;
			}
			else
			{printf("(nil)"); }
			break;
		}
		if (format[(x + 1)] != '\0' && (format[x] == 'c' ||
		format[x] == 'i' || format[x] == 'f' || format[x] == 's'))
		{printf(", "); }
		x++;
	}
	printf("\n");
	va_end(arguments);
}
