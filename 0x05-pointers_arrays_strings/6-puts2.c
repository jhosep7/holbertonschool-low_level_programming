#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, j;
for (j = 0; str[j]; j++)
{
}
for (i = 0; str[i]; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
