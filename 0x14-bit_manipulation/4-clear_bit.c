#include "holberton.h"
/**
 * clear_bit-sets the value of a bit to 0 at a given index.
 * @n:Long int
 * @index:Un Int
 * Return: Int.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test = 1;
	unsigned int size = sizeof(n) * 8;

	if (*n == '\0' || (index > size))
	{return (-1); }
	test = test << index;
	*n = *n & (~test);
	return (1);
}