#include "holberton.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: character
 * Return: it doesn't returns.
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
}
while (i-- > 0)
{
_putchar(s[i]);
}
_putchar('\n');
}
