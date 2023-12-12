#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of the list
* @head: a pointer to pointer to the list
* @n: a constant parameter
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new, *t;

/*Allocate memory and check if null*/
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}

/*Assign the new values*/
new->n = n;
t = *head;

if (t == NULL)
{
*head = new;
}
else
{
while (t->next != NULL)
{
t = t->next;
}
t->next = new;
}

return (new);

}
