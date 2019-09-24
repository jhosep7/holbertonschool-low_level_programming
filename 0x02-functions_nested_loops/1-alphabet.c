#include "holberton.h"
/**
 * print_alphabet - a loop to generate a-z text
 *
 * description: this function generate the alphabet
 * Return: void
 */
void print_alphabet(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
