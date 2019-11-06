#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: listint_t.
 * @index: N number.
 * Return: listint_t.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *Aux;

	if (head != NULL)
	{
		Aux = head;
		while (Aux != NULL)
		{
			if (i == index)
			{return (Aux); }
			Aux = (*Aux).next;
			i++;
		}
	}
	return (NULL);
}