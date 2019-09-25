#include "holberton.h"
#include "stdio.h"
/**
 * fibonacci - prints the first 50 Fibonacci numbers
 *
 * description: starting with 1 and 2, followed by a new line.
 *
 * Return: int
 */
int fibonacci(void)
{
int  x = 1;
long  x1 = 0, x2 = 1, y;
while (int i <= 50)
{
y = x1 + x2;
printf("%ld, ", y);
x1 = x2;
x2 = y;
i++;
}
return (0);
}
