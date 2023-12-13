#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of the list
* @head: a pointer to pointer to the list
* @n: data of the new node
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new_node;

/*Check if the list is not empty*/
if (head == NULL)
{
return (NULL);
}

/*Allocate memory for the new node and check for faliure*/
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/*Assign data(n) to the new node*/
new_node->n = n;

/*point next of newNode to the first node of the list*/
new_node->next = *head;

/*point prev of the newNode to NULL*/
new_node->prev = NULL;

/*point prev of the 1st node (now first node is the 2nd node) to the newNode*/
if ((*head) != NULL)
{
(*head)->prev = new_node;
}

/*head points to the newNode*/
*head = new_node;

return (new_node);

}
