#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 * @h:str
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
	size_t Elements;

	for (Elements = 0; h; Elements++)
	{h = (*h).next; }
	return (Elements);
}
