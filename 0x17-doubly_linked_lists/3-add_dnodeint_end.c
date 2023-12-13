#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of the list
* @head: a pointer to a pointer to the doubly linked list
* @n: integer, data(n) of the new node
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new_node, *last;

/*Allocate memory for the newNode and check for faliure*/
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/*Assign data(n) to the newNode*/
new_node->n = n;

/*point next of the newNode to NULL since it's the last node*/
new_node->next = NULL;

/*If there's no head/list, make newNode the head of the list*/
if (*head == NULL)
{
new_node->next = *head;
*head = new_node;
}
else
{
/*traverse till the last node*/
while (last->next)
{
last = last->next;
}

/*change next of the last node to point to the newNode*/
last->next = new_node;
}

new_node->prev = last;

return (new_node);

}
