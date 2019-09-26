#include "holberton.h"
/**
 * print_most_numbers -  function that prints the numbers
 * @void: no return
 * Return: none
 */

void print_most_numbers(void)
{
for (int i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
{
i++;
}
putchar(i);
}
putchar('\n');
}
