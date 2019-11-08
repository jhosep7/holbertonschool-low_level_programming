#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:UL int
 * @index: U int
 * Return: int.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int Bt;

	if ((n == 0) | ((sizeof(unsigned long int) * 8) < index))
	{return (-1); }
	Bt = 1;
	Bt <<= index;
	*n |= (1 << index);
	return (1);
}