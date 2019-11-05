#include "lists.h"
/**
 * listint_len - check the code for Holberton School students.
 * @h:str
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t Element;

	for (Element = 0; h != NULL; Element++)
	{
		h = (*h).next;
	}
	return (Element);
}
