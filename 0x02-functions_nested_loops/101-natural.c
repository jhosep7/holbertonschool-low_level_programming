#include <stdio.h>
/**
 * main - Program to sum integers
 *
 * Description: check for all natural numbers in range of
 * 3 and 5 and sum them
 * Return: 0
 */
int main(void)
{
int x, y;
for (x = 0; x < 1024; x++)
{
if (x % 5 == 0 || x % 3 == 0)
{
y += x;
}
}
printf("%d\n", y);
return (0);
}
