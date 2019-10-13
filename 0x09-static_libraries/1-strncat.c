#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 *@dest:char
 *@src:char
 *@n:integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
char *Array = dest;
while (*dest)
{
dest++;
}
while (*src && n--)
{
*dest++ = *src++;
}
*dest = '\0';
return (Array);
}
