#include "holberton.h"

/**
 * IfPrimeQ - returns 1 if it is a prime number
 * @x: int
 * @y: int
 * Return: Always int
 */
int IfPrimeQ(int x, int y)
{
if (x == y)
{return (1); }
if (y % x == 0)
{return (0); }
return (IfPrimeQ(x + 1, y));
}

/**
 * is_prime_number - returns 1 if it is a prime number
 * @n: int
 * Return: Always int
 */
int is_prime_number(int n)
{
if (n <= 1)
{return (0); }
return (IfPrimeQ(2, n));
}
