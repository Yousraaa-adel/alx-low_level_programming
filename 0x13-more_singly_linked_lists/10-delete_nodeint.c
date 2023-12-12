#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at index
* @head: a pointer to pointer to the list
* @index: unsigned integer, index to node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev = *head;

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		for (count = 0; (count < (index - 1)) && (prev != NULL); count++)
		{
			prev = prev->next;
		}
	}
	temp = prev->next;
	if (index != 0)
	{
		prev->next = temp->next;
		free(temp);
	}
	else
	{
		free(prev);
		*head = temp;
	}

	return (1);
}
