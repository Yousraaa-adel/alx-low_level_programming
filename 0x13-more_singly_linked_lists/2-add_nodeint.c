#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of the list
* @head: pointer to pointer to the list
* @n: constant parameter
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new;

/*Allocate memory and check if null */
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
/*assign new values*/
new->n = n;
new->next = *head;
*head = new;

return (new);
}
