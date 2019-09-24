#include "holberton.h"
/**
 * _isalpha - a function that prints alphabetic letters
 * @c: int parameter
 *
 * Return: int value
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
