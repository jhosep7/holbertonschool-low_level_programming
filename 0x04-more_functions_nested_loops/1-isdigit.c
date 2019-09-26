#include "holberton.h"

/**
 * _isdigit - function that checks for a digit
 * @c: int type number
 * Return: 1 if uppercaseisdigit, else 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
