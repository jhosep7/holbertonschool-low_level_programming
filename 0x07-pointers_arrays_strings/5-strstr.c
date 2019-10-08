#include "holberton.h"

/**
 * _strstr - locates a substring..
 * @haystack:char
 * @needle:char
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
char *s, *tN;
if (!*needle)
{
return (haystack);
}
while (*haystack)
{
if (*haystack == *needle)
{
s = haystack;
tN = needle;
while (*tN)
{
if (*haystack++ != *tN++)
{
haystack = s;
break;
}
}
if (s != haystack)
{
return (s);
}
}
haystack++;
}
return (0);
}
