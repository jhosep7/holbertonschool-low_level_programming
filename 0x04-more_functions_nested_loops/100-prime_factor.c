#include <stdio.h>

/**
 * main - print  prime
 *
 * description: finds and prints the largest prime factor of num
 * Return: 0
 */

int main(void)
{
long i;
long RandomV;
RandomV = 612852475143;
for (i = 2; i < RandomV; i++)
{
if (RandomV % i == 0)
{
RandomV = RandomV / i;
}
}
printf("%ld\n", RandomV);
return (0);
}
