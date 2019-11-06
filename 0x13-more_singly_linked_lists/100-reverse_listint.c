#include "lists.h"
/**
 * reverse_listint - check the code for Holberton School students.
 * @head: str
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *OldNd = NULL, *Aux = NULL;

	if (!head || !*head)
	{return (NULL); }
	OldNd = *head;
	*head = NULL;
	while (OldNd != NULL)
	{
		Aux = (*OldNd).next;
		(*OldNd).next = *head;
		*head = OldNd;
		OldNd = Aux;
	}
	return (*head);
}