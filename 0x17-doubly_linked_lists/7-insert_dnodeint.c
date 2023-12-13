#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: a pointer to a pointer to the list
* @idx: unsigned integer, the position to have the new node
* @n: integer, the data(n) of the new node
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *new_node, *temp = *head;
unsigned int i = 0;

if (*h == NULL)
{
return (NULL);
}

/*Allocate memory for the newNode and check for faliure*/
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/*Assign data(n) to the newNode*/
new_node->n = n;

if (idx == 0)
{
new_node->next = temp;
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
for (; i < (idx - 1); i++)
{
if (temp == NULL || temp->next == NULL)
{
return (NULL);
}
temp = temp->next;
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
