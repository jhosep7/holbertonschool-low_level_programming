#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet several times.
 *
 * Description: Write a function that prints the alphabet x10.
 */
void print_alphabet_x10(void)
{
char x;
int y = 0;
while (y < 10)
{
x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
y++;
}
}
