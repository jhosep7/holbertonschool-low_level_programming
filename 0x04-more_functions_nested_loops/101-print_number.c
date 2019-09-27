#include "holberton.h"

/**
 * print_number - print  prime
 * @n: int
 * description: finds and prints the largest prime factor of num
 * Return: 0
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
} 
_putchar(n % 10 + '0');

}
