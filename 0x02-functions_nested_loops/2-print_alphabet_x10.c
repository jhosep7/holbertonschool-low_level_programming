#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet several times.
 *
 * Description: Write a function that prints the alphabet x10.
 */
void print_alphabet_x10(void)
{
for (int h = 0 ; h <= 9 ; h++)
{
for (char i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
