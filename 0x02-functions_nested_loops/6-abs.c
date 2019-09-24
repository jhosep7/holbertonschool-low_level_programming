#include "holberton.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 *
 * @r: int type
 *
 * Return:changes a negative num to positive.
 */

int _abs(int r)
{
if (r < 0)
{
r  = (-1) * (r);
}
else
{
r = r;
}
return (r);
}
