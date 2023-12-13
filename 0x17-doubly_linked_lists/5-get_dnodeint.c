#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: a pointer to the doubly linked list
* @index: unsigned integer, index to the required node
* Return: the nth node of a the list, and NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

unsigned int count = 0;

if (head == NULL)
{
return (NULL);
}

while (head)
{
if (count == index)
{
return (head);
}

head = head->next;
count++;

}

return (head);

}
