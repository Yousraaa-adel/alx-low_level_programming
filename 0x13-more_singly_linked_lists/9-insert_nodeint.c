#include "lists.h"

/**
* insert_nodeint_at_index - inserts a node at a given position
* @head: a pointer to pointer to the list
* @idx: unsigned int, index to the node
* @n: integer
* Return: the address of the new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

listint_t *new_node, *temp = *head;
unsigned int count = 0;

if (head == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;

if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}

for (; count < (idx - 1); count++)
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
