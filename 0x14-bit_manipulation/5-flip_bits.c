#include "holberton.h"
/**
 * flip_bits - number of bits you would need to flip.
 * @n:long int
 * @m:long int
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int  Vxor;

	Vxor = n ^ m;
	while (Vxor)
	{
		if ((Vxor & 1) == 1)
		{i++; }
		Vxor = Vxor >> 1;
	}
	return (i);
}