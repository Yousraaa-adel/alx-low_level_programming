#include "lists.h"

/**
* get_nodeint_at_index - get the nth of node
* @head: pointer to the list
* @index: integer
* Return: a pointer to index and NULL if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int count = 0;

if (head == NULL)
{
return (NULL);
}

while (head)
{
if (cound == index)
{
return (head);
}

head = head->next;
count++;

}

return (NULL);


}
