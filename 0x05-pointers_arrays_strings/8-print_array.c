#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: integer
 * @n: integer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
for (n = 0; n <= 4; n++)
{
if (n != 4)
{
printf("%d, ", a[n]);
}
else
{
printf("%d \n", a[n]);
}
}
}
