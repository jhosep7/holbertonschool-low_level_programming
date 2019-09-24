#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
