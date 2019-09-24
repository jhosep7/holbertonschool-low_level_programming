 #include "holberton.h"
/**
 * print_sign - check if n is +, - or 0
 *
 * @n: int type
 *
 * Return: 1 if n is greater than 0,-1 if < 0 and 0 = zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('+');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
