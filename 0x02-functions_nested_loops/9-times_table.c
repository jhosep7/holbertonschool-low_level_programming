#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
if ((x * y) > 9)
{
_putchar(((x * y) / 10) + '0');
_putchar(((x * y) % 10) + '0');
}
else if (y != 0)
{
_putchar(' ');
_putchar((x * y) + '0');
}
else
{
_putchar((x * y) + '0');
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
