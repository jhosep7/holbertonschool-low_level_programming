#include "holberton.h"
/**
 * _strcmp - compares two strings.
 *@s1:char
 *@s2:char
 * Return: Always int.
 */
int _strcmp(char *s1, char *s2)
{
int rest;
while (*s1 && *s2)
{
if (*s1 != *s2)
{
rest = *s1 - *s2;
return (rest);
}
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
if (*s1 < *s2)
{
return (-1);
}
else
{
return (1);
}
}
}
