#include "lists.h"

/**
 *StringLen - string lenght
 *@String:string comming str
 *Return: int
 */
int StringLen(const char *String)
{
	int x;

	for (x = 0; String[x] != '\0'; x++)
	{; }
	return (x);
}

/**
 * add_node - check the code for Holberton School students.
 * @head:pointerx2
 * @str: string
 * Return: list:t.
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *NewNode;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL || head == NULL)
	{return (NULL); }
	if (str != NULL)
	{
		(*NewNode).str = strdup(str);
		if ((*NewNode).str == NULL)
		{
			free(NewNode);
			return (NULL);
		}
		(*NewNode).len = StringLen((*NewNode).str);
	}
	(*NewNode).next = *head;
	*head = NewNode;
	return (NewNode);
}
