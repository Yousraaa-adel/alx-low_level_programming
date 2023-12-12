#include "lists.h"

/**
* sum_listint - Returns sum of all data(n) in the list
* @head: a pointer to the list
* Return: sum of all (n) and 0 if list is empty
*/
int sum_listint(listint_t *head)
{

int sum = 0;

if (head == NULL)
{
return (0);
}

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);

}
