#include "holberton.h"

/**
 * print_triangle - triangle
 * @size: int
 * Description: print triangle.
 * function that prints a triangle, followed by a new line.
 *
 * Return: 0
 */

void print_triangle(int size)
{
int i;
int j;
int shape;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
shape = size - i;
for (j = 1; j <= size; j++)
{
if (j < shape)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
