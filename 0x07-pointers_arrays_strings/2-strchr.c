#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: char
 * @c: char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i]; i++)
{
if (s[i] == c)
{
s += i;
return (s);
}
}
if (!c)
{
return (s);
}
return ('\0');
}
