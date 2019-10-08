#include "holberton.h"
/**
 * _strpbrk - functiont searches a string for any of a set of bytes
 *
 * @s: char
 * @accept:char
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; *(accept + i); i++)
{
if (*(accept + i) == *s)
{
return (s);
}
}
s++;
}
return (0);
}
