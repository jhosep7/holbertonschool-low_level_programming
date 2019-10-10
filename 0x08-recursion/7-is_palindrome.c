#include "holberton.h"

/**
 * LenString - check the code for Holberton School students.
 * @string:char
 * Return: Always int.
 */
int LenString(char *string)
{
if (*string == '\0')
{return (0); }
else
{return (1 + LenString(string + 1)); }
}

/**
 * CheckPalindrome - check.
 * @string:char
 * @len:char
 * Return: Always int.
 */
int CheckPalindrome(char *string, int len)
{
if (len <= 0)
{return (1); }
if (string[0] == string[len - 1])
{return (CheckPalindrome(string + 1, len - 2)); }
return (0);
}

/**
 * is_palindrome - check if it's Palind.
 * @s:char
 * Return: Always int.
 */
int is_palindrome(char *s)
{
int len = LenString(s);
if (len <= 1)
{return (1); }
return (CheckPalindrome(s, len));
}
