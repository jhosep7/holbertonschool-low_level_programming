#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: int type
 *
 * Return:return r final value
 */

int print_last_digit(int r)
{
if (r < 0)
{
r = (-1) * (r % 10);
}
else
{
r = r % 10;
}
_putchar(r + '0');
return (r);
}
