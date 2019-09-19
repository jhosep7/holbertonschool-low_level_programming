#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (a = 'a'; a < 'g'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
