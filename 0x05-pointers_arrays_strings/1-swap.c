#include "holberton.h"
/**
 *swap_int - function that swaps the values of two integers
 *
 *@a:int pointer
 *@b: int pointer
 */
void swap_int(int *a, int *b)
{
int temporal = *a;
*a = *b;
*b = temporal;
}
