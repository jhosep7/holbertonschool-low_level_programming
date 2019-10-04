#include "holberton.h"
/**
 * _strcmp - compares two strings.
 *@s1:char
 *@s2:char
 * Return: Always int.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int rest;
for (i = 0; s1[i]; i++)
{ }
for (i = 0; s2[i]; i++)
{
if (s1[i] != s2[i])
{
rest = s1[i] - s2[i];
return (rest);
}
}
return (0);
}
