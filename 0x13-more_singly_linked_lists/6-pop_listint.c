#include "lists.h"
/**
 * pop_listint - check the code for Holberton School students.
 * @head: str
 * Return:int.
 */
int pop_listint(listint_t **head)
{
	listint_t *Temp;
	int i;

	if (*head != NULL)
	{
		Temp = *head;
		*head = (**head).next;
		i = Temp->n;
		free(Temp);
		return (i);
	}
	return (0);
}
