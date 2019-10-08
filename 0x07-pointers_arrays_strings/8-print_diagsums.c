#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a: int
 * @size: int
 * Return: none.
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sumaA = 0, sumaB = 0;
for (i = 0; i < size; i++)
{
sumaA = sumaA + a[(size + 1) * i];
}
for (j = 0; j < size; j++)
{
sumaB = sumaB + a[(size - 1) * (j + 1)];
}
printf("%i,%i\n", sumaA, sumaB);
}
