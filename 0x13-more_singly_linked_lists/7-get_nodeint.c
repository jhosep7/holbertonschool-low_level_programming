#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: listint_t.
 * @index: N number.
 * Return: listint_t.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; head != NULL; i++)
		{
			if (i == index)
			{return head; }
			head = (*head).next;
		}
	}
	return (NULL);
}
