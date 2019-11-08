#include "holberton.h"
/**
 * clear_bit-sets the value of a bit to 0 at a given index.
 * @n:Long int
 * @index:Un Int
 * Return: Int.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test;

	if ((index > (sizeof(unsigned long int) * 8)))
	{return (-1); }
	test = 1 << index;
	*n = *n & (~test);
	return (1);
}