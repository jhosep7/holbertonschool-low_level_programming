#include "lists.h"
/**
 * reverse_listint - check the code for Holberton School students.
 * @head: str
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *OldNd, *Aux;

	if (*head ==NULL)
	{return (NULL); }
	if ((*(head))->next == NULL)
	{return (*head); }
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