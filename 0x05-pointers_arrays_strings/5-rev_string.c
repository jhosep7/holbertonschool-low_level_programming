#include "holberton.h"
/**
 * _strlen - returns the length of the string
 * @s: the string to get the length
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
int counter = 0;
int i;
 for (i = 0; s[i]; i++)
{
++counter;
}
--counter;
return (counter);
}

/**
 * rev_string - prints a string in reverse order
 * @s: the string to count down from
 *
 * Description: Reverses the string in memory
 * Return: void
 */
void rev_string(char *s)
{
int x, c;
int PresentArray = _strlen(s);
char keeper;
c = PresentArray;
 for (x=0; c >= x; x++)
{
keeper = s[x];
s[x] = s[c];
s[c] = keeper;
c--;
}
}
