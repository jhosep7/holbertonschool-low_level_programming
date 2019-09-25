#include "stdio.h"
/**
 * main - prints the first 50 number
 *
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
long int fib1  = 0;
long int fib2  = 1;
long int fib3;
int i = 1;
while (i <= 50)
{
fib3 =  fib2 + fib1;
i++;
printf("%ld", fib3);
if (i <= 50)
{
printf(", ");
fib1 = fib2;
fib2 = fib3;
}
}
printf("\n");
return (0);
}
