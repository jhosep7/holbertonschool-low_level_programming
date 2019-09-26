#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminl
 * @n: int type
 * Return: none
 */

void print_line(int n)
{
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar ('\n');
}
