#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @size: receives n.
 * Return: Always 0.
 */
void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
