#include "holberton.h"
/**
 * NuevaFuncion - checks if natural
 * @x: int
 * @y: int
 * Return: int.
 */
int NuevaFuncion(int x, int y)
{
if (x == (y * y))
{return (y); }
if ((y * y) > x)
{return (-1); }
return (NuevaFuncion(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int.
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{return (0); }
if (n == 1)
{return (1); }
if (n < 0)
{return (-1); }
return (NuevaFuncion(n, 1));
}
