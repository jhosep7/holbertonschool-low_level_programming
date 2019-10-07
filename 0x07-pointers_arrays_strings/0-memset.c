#include "holberton.h"

/**
 * _memset - Write a function that fills memory with a constant Bit
 * @s: char
 * @b: char
 * @n: U int
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
{
s[i] = b;
}
return (s);
}
