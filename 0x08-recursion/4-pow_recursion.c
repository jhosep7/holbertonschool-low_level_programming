#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: int
 * @y: int
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
int r;
if (y < 0)
{
return (-1);
}
if (y > 0)
{
  r = x * _pow_recursion(x, (y - 1 ));
return (r);
}
return (1);
}
