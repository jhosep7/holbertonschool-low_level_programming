#include <stdio.h>
/**
 * main - FizzBuzz
 *
 * Description: print numbers 1 - 100, replace multiples of 3 with Fizz
 * multiples of 5 with Buzz and multiples of both with FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
