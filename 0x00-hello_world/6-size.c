#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char charType;
int integerType;
long int longintType;
long long int longlongint;
float floatType;
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d bytes(s)\n", sizeof(integerType));
printf("Size of a long int: %d bytes(s)\n", sizeof(longintType));
printf("Size of a long long int: %d bytes(s)\n", sizeof(longlongint));
printf("Size of a float: %d bytes\n", sizeof(floatType));
return (0);
}
