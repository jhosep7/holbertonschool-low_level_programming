#include "holberton.h"
/**
 * print_alphabet - prints the alphabet.
 *
 * Description: Write a function that prints the alphabet.
 */
void print_alphabet(void)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
