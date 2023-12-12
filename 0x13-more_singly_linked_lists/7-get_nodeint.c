#include "lists.h"

/**
* get_nodeint_at_index - get the nth of node
* @head: pointer to the list
* @index: the index of node
* Return: a pointer to index and NULL if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int count = 0;

/*Checking if list exists*/
if (head == NULL)
{
return (NULL);
}

/*Looping over the list*/
while (head)
{

if (count == index)
{
return (head);
}

head = head->next;
count++;

}

return (NULL);


}
