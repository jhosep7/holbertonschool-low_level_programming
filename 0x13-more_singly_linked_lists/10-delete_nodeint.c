#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *OldNd, *Aux;
	unsigned int i = 1;

	if (*head == NULL)
	{return (-1); }
	if (*head != NULL)
	{
		if (index == 0)
		{
			Aux = *head;
			*head = (**head).next;
			free(Aux);
			return (1);
		}
		OldNd = *head;
		Aux = (**head).next;

		while (Aux != NULL)
		{
			if (i == index)
			{
				(*OldNd).next = (*Aux).next;
				free(Aux);
				return (1);
			}
			OldNd = Aux;
			Aux = (*Aux).next;
			i++;
		}
	}
	return (-1);
}
