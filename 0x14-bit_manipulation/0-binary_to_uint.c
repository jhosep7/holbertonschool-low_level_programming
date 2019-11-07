#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:char
 * Return: Unsigned Int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int  result = 0;
int i, j = 0;

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
	result = result << 1;
	if (b[i] == '1')
	{
		result ^= 1;
	}
}
return (result);
}
