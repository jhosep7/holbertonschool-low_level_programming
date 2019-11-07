#include "holberton.h"
/**
 * print_binary - binary representation of a number.
 * @n: Unsignrd long int
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	char b;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n == 1)
	{
		_putchar('1');
	}
	if (n > 1)
	{
	print_binary(n >> 1);
	b = (n & 1) ? '1' : '0';
	_putchar(b);
	}
}
