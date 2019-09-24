#include "holberton.h"
/**
 * jack_bauer - computes the absolute value of an integer
 *
 * @void: it is not expecting a return value
 *
 * Return:No returning because of void only putchar.
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
}
