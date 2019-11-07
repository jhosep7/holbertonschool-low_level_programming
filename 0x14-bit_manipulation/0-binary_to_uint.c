#include "holberton.h"
unsigned int binary_to_uint(const char *b);
int _pow_recursion(int x, int y);
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
	{return (-1); }
	if (y > 0)
	{
		r = x * _pow_recursion(x, (y - 1));
		return (r);
	}
	return (1);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:char
 * Return: Unsigned Int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int  result = 0, BinaryNum;
int i, j=0;

if (b == NULL)
{
	return (0);
}
for (j = 0; b[j] != '\0'; j++)
{; }
for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] != '1' && b[i] != '0')
	{
		return (0);
	}
	if (b[i] == '1')
	{BinaryNum = 1; }
	if (b[i] == '0')
	{BinaryNum = 0; }
	result += (BinaryNum *_pow_recursion(2,j))/2;
	j--;
}
return (result);
}