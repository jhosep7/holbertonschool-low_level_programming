#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * @void: It is not expecting a value
 *
 * Return: Not returning because of void
 */

void times_table(void)
{
int x, y;
x = 0;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
if ((x *y) > 9)
{
_putchar(((x *y) / 10) + '0');
_putchar(((x *y) % 10) + '0');
}
else if (y != 0)
{
_putchar(' ');
_putchar((x *y) +'0');
}
else
{
_putchar((x *y) +'0');
}
if (y != 9)
{
_putchar(',');
_putchar(' ');
}
y++;
}
x++;
_putchar('\n');
}
}
